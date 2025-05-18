NAME = ft_ls

LIB = ft_ls.h

SRCS =	main.c\
		utils.c\
		utils2.c\
		ft_ls.c\
		print.c


CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) $(LIB) 
		$(CC)  -o $(NAME) $(SRCS)

clean:
	@/bin/rm -f $(OBJCS)

fclean: clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re