# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 15:40:21 by sriyani           #+#    #+#              #
#    Updated: 2022/04/02 15:40:24 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIB = push_swap.h

SRC =	push_swap.c\
		push_swap_utils.c\
		instraction.c\
		instraction2.c\
		push_sort5.c\
		small_sort.c\
		small_sort2.c\
		push_sort500.c\
		push_sort2_500.c\
		ft_printf.c\
		ft_printf2.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ) $(LIB)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re