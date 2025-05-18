#include "ft_ls.h"

void ft_print_ls(t_file *head, t_flags *flags)
{
    ColumnWidths widths = {0};
    int first =1;

    if (flags->list) 
        calculate_widths(head, &widths);

    t_file *current = head;
    while (current) 
    {
        if (flags->list) 
            print_long_format(current, &widths);
        else 
        {
            if (!first) 
                ft_putstr(" ");
            ft_putstr(current->name);
            first = 0;
        }
        current = current->next;
    }
    
    if (!flags->list) 
        ft_putstr("\n");
}

void print_directory_header(const char *dir_path, t_flags *flags)
{
    if (flags->recursive) 
    {
        ft_putstr(dir_path);
        ft_putstr(":\n");
    }
}

void print_total_blocks(long total_blocks, t_flags *flags)
{
    if (flags->list) 
    {
        ft_putstr("total ");
        ft_putnbr(total_blocks);
        ft_putstr("\n");
    }
}

void print_padded(char *str, int width, int right_align) 
{
    int len = ft_strlen(str);
    int padding = width - len;
    
    if (right_align) 
    {
        while (padding-- > 0)
            ft_putchar(' ');
        ft_putstr(str);
    } 
    else 
    {
        ft_putstr(str);
        while (padding-- > 0) 
            ft_putchar(' ');
    }
}

void print_padded_right(char *str, int width) 
{
    int len = ft_strlen(str);
    while (len < width) 
    {
        ft_putchar(' ');
        width--;
    }
    ft_putstr(str);
}
void print_padded_left(char *str, int width)
{
    ft_putstr(str);
    int len = ft_strlen(str);
    while (len < width)
    {
        ft_putchar(' ');
        len++;
    }
}

void print_directory_contents(const char *dir_path, t_flags *flags, int is_root)
{
    DIR *dir = opendir(dir_path);
    if (!dir) {
        perror("ft_ls");
        return;
    }

    if (!is_root)
        ft_putstr("\n");
    ft_putstr(dir_path);
    ft_putstr(":\n");

    long total_blocks = 0;
    t_file *head = NULL;
    struct dirent *entry;
    int has_entries = 0;


    while ((entry = readdir(dir)) != NULL) 
    {
        if (!flags->all && entry->d_name[0] == '.')
            continue;

        char *full_path = join_paths(dir_path, entry->d_name);
        struct stat st;
        
        if (stat(full_path, &st) == 0) 
        {
            total_blocks += st.st_blocks;
            append_node(&head, new_node(full_path, st.st_mtime));
            has_entries = 1;
        }
        free(full_path);
    }
    closedir(dir);

    if (flags->list) {
        ft_putstr("total ");
        ft_putnbr(total_blocks / 2);
        ft_putstr("\n");
    }

    ColumnWidths widths = {0};
    if (flags->list && has_entries) 
    {
        calculate_widths(head, &widths);
    }
    
    t_file *current = head;
    while (current) {
        if (flags->list) {
            print_long_format(current, &widths);
        } else {
            ft_putstr(get_basename(current->name));
            ft_putstr("\n");
        }
        current = current->next;
    }


    if (flags->recursive)
    {
        current = head;
        while (current) 
        {
            struct stat st;
            if (stat(current->name, &st) == 0 && S_ISDIR(st.st_mode) &&
                ft_strcmp(get_basename(current->name), ".") != 0 &&
                ft_strcmp(get_basename(current->name), "..") != 0) 
            {
                print_directory_contents(current->name, flags, 0);
            }
            current = current->next;
        }
    }

    free_list(head);
}

void print_recursive_normal(t_file *head, const char *dir_path, int is_first_level, t_flags *flags)
{

    if (!is_first_level) 
        ft_putstr("\n");
    ft_putstr(dir_path);
    ft_putstr(":\n");

    t_file *current = head;
    int first = 1;
    while (current) {
        if (!first) ft_putstr("  "); 
        ft_putstr(current->name);
        first = 0;
        current = current->next;
    }
    ft_putstr("\n");

    current = head;
    while (current) {
        char *full_path = join_paths(dir_path, current->name);
        struct stat st;
        
        if (stat(full_path, &st) == 0 && S_ISDIR(st.st_mode) &&
            ft_strcmp(current->name, ".") != 0 &&
            ft_strcmp(current->name, "..") != 0) {
            
            t_file *subdir_head = process_directory(full_path, flags);
            print_recursive_normal(subdir_head, full_path, 0, flags);
            free_list(subdir_head);
        }
        
        free(full_path);
        current = current->next;
    }
}

char *print_permissions(struct stat file_stat)
{
    char *perms;
    perms = ft_strdup("----------"); 
    if (S_ISDIR(file_stat.st_mode)) 
        perms[0] = 'd';
    else if (S_ISLNK(file_stat.st_mode)) 
        perms[0] = 'l';  
    else 
        perms[0] = '-';

    if (S_ISDIR(file_stat.st_mode))
        perms[0] = 'd';
    else if (S_ISLNK(file_stat.st_mode))
        perms[0] = 'l';
    else if (S_ISBLK(file_stat.st_mode))
        perms[0] = 'b';
    else if (S_ISCHR(file_stat.st_mode))
        perms[0] = 'c';
    else if (S_ISFIFO(file_stat.st_mode))
        perms[0] = 'p';
    else if (S_ISSOCK(file_stat.st_mode))
        perms[0] = 's';


    if (file_stat.st_mode & S_IRUSR)
        perms[1] = 'r'; 
    if (file_stat.st_mode & S_IWUSR)
        perms[2] = 'w'; 
    if (file_stat.st_mode & S_IXUSR)
        perms[3] = 'x'; 

 
    if (file_stat.st_mode & S_IRGRP)
        perms[4] = 'r'; 
    if (file_stat.st_mode & S_IWGRP)
        perms[5] = 'w';
    if (file_stat.st_mode & S_IXGRP)
        perms[6] = 'x'; 

    if (file_stat.st_mode & S_IROTH)
        perms[7] = 'r';
    if (file_stat.st_mode & S_IWOTH)
        perms[8] = 'w';
    if (file_stat.st_mode & S_IXOTH)
        perms[9] = 'x'; 
    return perms;

}


char *join_with_comma(unsigned int major, unsigned int minor)
{
    char *major_str = ft_itoa(major);
    char *minor_str = ft_itoa(minor);
    char *result = ft_strjoin(major_str, ", ");
    char *final = ft_strjoin(result, minor_str);
    
    free(major_str);
    free(minor_str);
    free(result);
    
    return final;
}

void print_long_format(t_file *file, ColumnWidths *widths) 
{
    struct stat st;
    if (stat(file->name, &st) != 0) 
        return;

    char *perms = print_permissions(st);
    char *time_str = parse_time(ctime(&st.st_mtime));
    char *owner = getpwuid(st.st_uid) ? getpwuid(st.st_uid)->pw_name : "unknown";
    char *basename = get_basename(file->name);
    char *links = ft_itoa(st.st_nlink);
    
    char *group_buf;
    struct group *gr = getgrgid(st.st_gid);
    char *group = gr ? gr->gr_name : NULL;
    if (!group) 
    {
        group_buf = ft_itoa(st.st_gid);
        group = group_buf;
    }


    char *size_str;
    if (S_ISCHR(st.st_mode) || S_ISBLK(st.st_mode)) 
        size_str = join_with_comma(major(st.st_rdev), minor(st.st_rdev));
    else
        size_str = ft_itoa(st.st_size);

    if (!perms || !time_str || !links || !size_str) 
    {
        free(perms);
        free(time_str);
        free(links);
        free(size_str);
        if (!gr) 
            free(group_buf);
        return;
    }

    ft_putstr(perms); 
    ft_putchar(' ');
    print_padded(links, widths->max_links, 1); 
    ft_putchar(' ');
    print_padded(owner, widths->max_owner, 0); 
    ft_putstr("  ");
    print_padded(group, widths->max_group, 0); 
    ft_putstr("  ");
    print_padded(size_str, widths->max_size, 1); 
    ft_putchar(' ');
    ft_putstr(time_str); 
    ft_putchar(' ');
    ft_putstr(basename); 
    ft_putchar('\n');

    free(perms);
    free(time_str);
    free(links);
    free(size_str);
    if (!gr) 
        free(group_buf);
}