#include "ft_ls.h"

char	*ft_strcpy(char	*dst,	char const	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strcat(char	*s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *) malloc((ft_strlen (s1) + ft_strlen (s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	else
		ft_strcpy (ptr, s1);
	ft_strcat (ptr, s2);
	return (ptr);
}
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

int	ft_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		if ((*s != c && len == 0) || (*s != c && *(s - 1) == c))
			len++;
		s++;
	}
	return (len);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (len > ft_strlen(s))
	{
		len = ft_strlen(s);
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (ptr);
	while (s[start] && i < len && start <= ft_strlen(s))
	{
		ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


void	ft_putstr(const char *str)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
    return ;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		end;
	int		index;
	int		start;

	end = 0;
	start = 0;
	index = 0;
	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (index < ft_len(s, c))
	{
		while (s[end] == c && s[end])
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		ptr[index] = ft_substr(s, start, end - start);
		index++;
	}
	ptr[index] = NULL;
	return (ptr);
}

t_file *new_node(const char *name, time_t mtime)
{
    t_file *node = malloc(sizeof(t_file));
    if (!node)
    {
        ft_putstr("Memory allocation error\n");
        exit(1);
    }
    node->name = ft_strdup(name);
	node->mtime = mtime;
    node->next = NULL;
    return node;
}

void append_node(t_file **head, t_file *node)
{
    t_file *current;
    
    if (*head == NULL)
    {
        *head = node;
    }
    else
    {
        current = *head;
        while (current->next)
            current = current->next;
        current->next = node;
    }
}

void free_list(t_file *head)
{
    t_file *tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp->name);
        free(tmp);
    }
}


int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && tolower((unsigned char)*s1) == tolower((unsigned char)*s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)tolower(*s1) - (unsigned char)tolower(*s2));
}

void swap_nodes(t_file *a, t_file *b)
{
    char *temp = a->name;
    a->name = b->name;
    b->name = temp;
}

void sort_list(t_file *head, t_flags *flags)
{
    int swapped;
    t_file *ptr;
    t_file *lptr = NULL;

    if (!head)
        return;

    while (1)
	{
        swapped = 0;
        ptr = head;
        while (ptr->next != lptr)
		{
            int compare_result = ft_strcmp(ptr->name, ptr->next->name);

            if ((!flags->reverse && compare_result > 0) || (flags->reverse && compare_result < 0))
			{
                swap_nodes(ptr, ptr->next);
                swapped = 1;
            }
            ptr = ptr->next;
        }
        lptr = ptr;
        if (!swapped)
            break;
    }
}

int is_hidden_file(const char *filename)
{
    return filename[0] == '.';
}

void sort_by_mtime(t_file **head)
{
    if (!head || !*head)
		return;

    t_file *sorted = NULL;
    t_file *current = *head;

    while (current) 
	{
        t_file *next = current->next;

        if (!sorted || current->mtime > sorted->mtime) 
		{
            current->next = sorted;
            sorted = current;
        } 
		else 
		{
            t_file *temp = sorted;
            while (temp->next && current->mtime <= temp->next->mtime) 
			{
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = next;
    }

    *head = sorted;
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar('0' + nbr % 10);
	}
}


int	ft_lenght(int n)
{
	long	len;
	long	num;

	len = 0;
	num = n;
	if (n < 0)
	{
		num = num * (-1);
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_zero(char *p)
{
	p = NULL;
	p = malloc(2 * sizeof(char));
	p[0] = '0';
	p[1] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	num;
	long int	len;

	ptr = NULL;
	len = ft_lenght(n);
	if (n == 0)
		return (ft_zero(ptr));
	ptr = malloc ((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (n < 0)
	{
		ptr[0] = '-';
		num = num * (-1);
	}
	while (len-- > 0 && num > 0)
	{
		ptr[len] = num % 10 + '0';
		num = num / 10;
	}
	return (ptr);
}
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
void ft_free(char **str)
{
	int i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void sort_list_alphabetical(t_file **head)
{
    t_file *current;
    t_file *next_node;
    char *temp_name;
    time_t temp_time;

    if (!head || !*head)
        return;

    current = *head;
    while (current->next != NULL) 
	{
        next_node = current->next;
        while (next_node != NULL)
		{
            char *base1 = get_basename(current->name);
            char *base2 = get_basename(next_node->name);
            if (ft_strcmp(base1, base2) > 0) 
			{
                temp_name = current->name;
                temp_time = current->mtime;
                
                current->name = next_node->name;
                current->mtime = next_node->mtime;
                
                next_node->name = temp_name;
                next_node->mtime = temp_time;
            }
            next_node = next_node->next;
        }
        current = current->next;
    }
}