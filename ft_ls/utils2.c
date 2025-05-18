#include "ft_ls.h"

int count_digits(long num) 
{
    int count = 1;
    while (num >= 10) 
    {
        num /= 10;
        count++;
    }
    return count;
}

void calculate_widths(t_file *head, ColumnWidths *widths) 
{
    struct stat st;
    t_file *current = head;
    
    ft_memset(widths, 0, sizeof(ColumnWidths));
    
    while (current)
    {
        if (stat(current->name, &st) == 0) 
        {
            struct passwd *pw = getpwuid(st.st_uid);
            struct group *gr = getgrgid(st.st_gid);
            
            int links = count_digits(st.st_nlink);
            int owner = pw ? ft_strlen(pw->pw_name) : 7;
            int group = gr ? ft_strlen(gr->gr_name) : 7;
            int size = count_digits(st.st_size);
            
            if (links > widths->max_links) 
                widths->max_links = links;
            if (owner > widths->max_owner) 
                widths->max_owner = owner;
            if (group > widths->max_group) 
                widths->max_group = group;
            if (size > widths->max_size) 
                widths->max_size = size;
        }
        current = current->next;
    }
}
void init_flags(t_flags *flags)
{
    flags->list = 0;
    flags->recursive = 0;
    flags->reverse = 0;
    flags->all = 0;
    flags->time_sort = 0;
}

int parse_flags(int ac, char **av, t_flags *flags)
{
    int i, j;
    int non_flag_count = 0;

    init_flags(flags);

    for (i = 1; i < ac; i++)
    {
        if (av[i][0] == '-')
        {
            for (j = 1; av[i][j]; j++)
            {
                switch (av[i][j])
                {
                    case 'l': flags->list = 1;
                        break;
                    case 'R': flags->recursive = 1;
                        break;
                    case 'r': flags->reverse = 1;
                        break;
                    case 'a': flags->all = 1;
                        break;
                    case 't': flags->time_sort = 1;
                        break;
                    default:
                        ft_putstr("ft_ls: illegal option -- ");
                        char illegal[2] = {av[i][j], '\0'};
                        ft_putstr(illegal);
                        ft_putstr("\nusage: ft_ls [-lRrat] [file ...]\n");
                        return -1;
                }
            }
        }
        else
            non_flag_count++;
    }

    return non_flag_count;
}

char *parse_time(char *str)
{

    char *buffer = malloc(16); 

    if (!buffer) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }


    strncpy(buffer, str + 4, 3);
    buffer[3] = ' ';


    strncpy(buffer + 4, str + 8, 2);
    buffer[6] = ' ';


    strncpy(buffer + 7, str + 11, 5);
    buffer[12] = '\0';

    return buffer;
}

char *get_basename(char *path) 
{
    char *last_slash = ft_strrchr(path, '/');
    return last_slash ? last_slash + 1 : path;
}
char *join_paths(const char *path1, const char *path2)
{
    char *result = malloc(strlen(path1) + strlen(path2) + 2);
    if (!result) return NULL;
    strcpy(result, path1);
    strcat(result, "/");
    strcat(result, path2);
    return result;
}
