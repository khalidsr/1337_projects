# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 11:50:27 by sriyani           #+#    #+#              #
#    Updated: 2022/03/02 11:50:30 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = pipex

LIB = pipex.h

SRCS =	pipex.c\
		pipex_utils.c\
		pipex_utils2.c\
		ft_path.c\

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
