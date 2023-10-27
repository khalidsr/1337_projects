# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/22 15:34:31 by sriyani           #+#    #+#              #
#    Updated: 2022/08/06 17:57:44 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

LIB = philosophers.h

SRC =	philosophers.c\
		philosophers_utils.c\
		philosophers_utils2.c\
		philo_routine.c\
		philo_routine2.c

CC = cc

CFLAGS = -Wall -Werror -Wextra  #-fsanitize=address -g
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