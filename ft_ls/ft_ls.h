#ifndef FT_LS_H
# define FT_LS_H
#include <stdio.h>
#include <stdlib.h>
# include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <pwd.h> 
#include <grp.h> 
#include <sys/sysmacros.h>


typedef struct s_file
{
    char            *name;
    time_t          mtime;
    struct s_file   *next;
} t_file;

typedef struct s_flags {
    int list;     
    int recursive; 
    int reverse;    
    int all;       
    int time_sort;
} t_flags;

typedef struct {
    int max_links;
    int max_owner;
    int max_group;
    int max_size;
} ColumnWidths;


void ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_strrchr(const char *s, int c);
void	ft_putstr(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int	ft_len(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strcat(char	*s1,const char *s2);
t_file *new_node(const char *name, time_t mtime);
void append_node(t_file **head, t_file *node);
void free_list(t_file *head);
void swap_nodes(t_file *a, t_file *b);
void sort_list(t_file *head, t_flags *flags);
void ft_ls_recursive(const char *dir_path, t_flags *flags);
int	ft_strcmp(const char *s1,const char *s2);
int is_hidden_file(const char *filename);
void ft_ls_item(const char *path, t_flags *flags);
void sort_by_mtime(t_file **head);


void init_flags(t_flags *flags);
int parse_flags(int ac, char **av, t_flags *flags);
void apply_flags(t_file *head, t_flags *flags);

void print_long_format(t_file *file, ColumnWidths *widths);

void ft_ls_dir(const char *dir_path);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char	*dst,	char const	*src);

void ft_ls_dir_flag(const char *dir_path, t_flags *flags);
void handle_recursive_subdirectories(t_file *head, const char *dir_path, t_flags *flags);
void print_total_blocks(long total_blocks, t_flags *flags);
void print_directory_header(const char *dir_path, t_flags *flags);
t_file *process_directory_entries(DIR *dir, const char *dir_path, t_flags *flags, long *total_blocks);

DIR *open_and_validate_dir(const char *dir_path, t_flags *flags);
int	ft_lenght(int n);
char	*ft_zero(char *p);
char	*ft_itoa(int n);
void     ft_free(char **str);
void	*ft_memset(void *b, int c, size_t len);
void sort_list_alphabetical(t_file **head);
char *get_basename(char *path) ;

void print_total_blocks(long total_blocks, t_flags *flags);
void print_directory_header(const char *dir_path, t_flags *flags);
void print_directory_contents(const char *dir_path, t_flags *flags, int is_recursive);
void print_recursive_normal(t_file *head, const char *dir_path, int is_first_level, t_flags *flags);
char *print_permissions(struct stat file_stat);
void ft_print_ls(t_file *head, t_flags *flags);
void print_long_format(t_file *file, ColumnWidths *widths);

char *join_with_comma(unsigned int major, unsigned int minor);

int count_digits(long num) ;
void calculate_widths(t_file *head, ColumnWidths *widths) ;
char *parse_time(char *str);
char *get_basename(char *path) ;
int parse_flags(int ac, char **av, t_flags *flags);
void init_flags(t_flags *flags);
char *join_paths(const char *path1, const char *path2);

t_file *process_directory(const char *dir_path, t_flags *flags);
void handle_recursive_subdirectories(t_file *head, const char *dir_path, t_flags *flags);
void process_and_print_files(t_file *head, t_flags *flags);
t_file *process_directory_entries(DIR *dir, const char *dir_path, t_flags *flags, long *total_blocks);

#endif
