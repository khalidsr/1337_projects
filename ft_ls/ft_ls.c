#include "ft_ls.h"

void process_and_print_files(t_file *head, t_flags *flags)
{
    ColumnWidths widths;
    calculate_widths(head, &widths);

    if (flags->time_sort) 
    {
        sort_by_mtime(&head);
        ft_print_ls(head, flags);
    } 
    else if (flags->list) 
    {
        sort_list(head, flags);
        t_file *current = head;
        while (current) 
        {
            print_long_format(current, &widths);
            current = current->next;
        }
    } 
    else 
    {
        sort_list(head, flags);
        ft_print_ls(head, flags);
    }
}

t_file *process_directory(const char *dir_path, t_flags *flags)
{
    DIR *dir = opendir(dir_path);
    if (!dir) return NULL;

    t_file *head = NULL;
    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) 
    {
        if (!flags->all && entry->d_name[0] == '.')
            continue;

        char *full_path = join_paths(dir_path, entry->d_name);
        struct stat st;
        
        if (stat(full_path, &st) == 0) {
            append_node(&head, new_node(entry->d_name, st.st_mtime));
        }
        free(full_path);
    }
    closedir(dir);

    t_flags sort_flags = {0};
    sort_list(head, &sort_flags);
    return head;
}

void handle_recursive_subdirectories(t_file *head, const char *dir_path, t_flags *flags)
{
    t_file *current = head;

    while (current) 
    {
        ft_putstr(current->name);
        if (current->next)
            ft_putstr(" ");
        current = current->next;
    }
    ft_putstr("\n");

    current = head;
    while (current) 
    {
        char *sub_dir_path;
        if (ft_strcmp(dir_path, ".") == 0) 
        {
            char *temp = ft_strjoin("./", current->name);
            sub_dir_path = ft_strdup(temp);
            free(temp);
        } 
        else 
        {
            char *temp = ft_strjoin(dir_path, "/");
            sub_dir_path = ft_strjoin(temp, current->name);
            free(temp);
        }

        struct stat file_stat;
        if (stat(sub_dir_path, &file_stat) == 0 && S_ISDIR(file_stat.st_mode) &&
            ft_strcmp(current->name, ".") != 0 && ft_strcmp(current->name, "..") != 0) 
        {
            ft_putstr("\n");
            ft_ls_dir_flag(sub_dir_path, flags);
        }
        free(sub_dir_path);
        current = current->next;
    }
}

void ft_ls_dir_flag(const char *dir_path, t_flags *flags)
{
    if (flags->recursive) 
    {
        if (flags->list) 
        {
            print_directory_contents(dir_path, flags, 1);
        }
        else 
        {
            t_file *head = process_directory(dir_path, flags);
            print_recursive_normal(head, dir_path, 1, flags);
            free_list(head);
        }
    } 
    else 
    {
        DIR *dir = opendir(dir_path);
        if (!dir) 
        {
            perror("ft_ls");
            return;
        }
        long total_blocks = 0;
        t_file *head = process_directory_entries(dir, dir_path, flags, &total_blocks);
        closedir(dir);

        if (flags->list && head) 
        {
            ft_putstr("total ");
            ft_putnbr(total_blocks);
            ft_putstr("\n");
        }

        process_and_print_files(head, flags);
        free_list(head);
    }
}

t_file *process_directory_entries(DIR *dir, const char *dir_path, t_flags *flags, long *total_blocks)
{
    struct dirent *entry;
    struct stat file_stat;
    t_file *head = NULL;
    char *full_path;

    while ((entry = readdir(dir)) != NULL) 
    {
        if (!flags->all && entry->d_name[0] == '.')
            continue;
        if (ft_strcmp(dir_path, ".") == 0) 
        {
            char *temp = ft_strjoin("./", entry->d_name);
            full_path = ft_strdup(temp);
            free(temp);
        } 
        else 
        {
            char *temp = ft_strjoin(dir_path, "/");
            full_path = ft_strjoin(temp, entry->d_name);
            free(temp);
        }

        if (!full_path) 
        {
            perror("ft_strjoin failed");
            continue;
        }

        if (stat(full_path, &file_stat) == 0) 
        {
            if (flags->list)
                append_node(&head, new_node(full_path, file_stat.st_mtime));
            else
                append_node(&head, new_node(entry->d_name, file_stat.st_mtime));

            *total_blocks += file_stat.st_blocks / 2;
        } 
        else 
            perror("stat failed");
        free(full_path);
    }

    return head;
}
