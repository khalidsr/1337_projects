#include "ft_ls.h"


void ft_ls_item(const char *path, t_flags *flags)
{
    struct stat file_stat;
   
    if (stat(path, &file_stat) != 0)
    {
        ft_putstr("ft_ls: cannot access '");
        ft_putstr((char *)path);
        ft_putstr("': No such file or directory\n");
        return;
    }

    if (S_ISREG(file_stat.st_mode))
    {
        if (!is_hidden_file(path))
        {
            ft_putstr(path);
            ft_putstr("  ");
        }
        return;
    }

    DIR *dir;
    struct dirent *entry;
    t_file *head = NULL;

    if ((dir = opendir(path)) == NULL)
    {
        ft_putstr("ft_ls: cannot access '");
        ft_putstr((char *)path);
        ft_putstr("': No such file or directory\n");
        return;
    }
    
    while ((entry = readdir(dir)) != NULL)
    {
        char *full_path = join_paths(path, entry->d_name);
        if (!full_path) 
            continue;

        if (stat(full_path, &file_stat) == 0)
        {
            if (!is_hidden_file(entry->d_name))
            {
                append_node(&head, new_node(full_path, file_stat.st_mtime));
            }
        }
        free(full_path); 
    }
    closedir(dir);

    if (head)
    {
        ft_print_ls(head, flags);
        free_list(head);
    }
}


DIR *open_and_validate_dir(const char *dir_path, t_flags *flags)
{
    DIR *dir = opendir(dir_path);
    if (!dir) 
    {
        struct stat file_stat;
        if (stat(dir_path, &file_stat) == 0 && S_ISREG(file_stat.st_mode)) 
        {
            ft_ls_item(dir_path, flags);
            ft_putstr("\n");
        } 
        else 
        {
            ft_putstr("ft_ls: cannot access '");
            ft_putstr((char *)dir_path);
            ft_putstr("': No such file or directory\n");
        }
    }
    return dir;
}

int main(int ac, char **av, char **env)
{
    t_flags flags;
    int non_flag_count;

    non_flag_count = parse_flags(ac, av, &flags);
    if (non_flag_count == -1)
        return 1;
    if (non_flag_count == 0)
    {
        ft_ls_dir_flag(".", &flags);
        return 0;
    }

    for (int i = 1; i < ac; i++)
    {
        if (av[i][0] != '-')
        {
            if (non_flag_count > 1)
            {
                ft_putstr(av[i]);
                ft_putstr(":\n");
            }
            ft_ls_dir_flag(av[i], &flags);
            
            // if (non_flag_count > 1 && i < ac - 1)
            //     ft_putstr("\n");
        }
    }

    return 0;
}


