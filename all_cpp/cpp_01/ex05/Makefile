# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 18:40:45 by sriyani           #+#    #+#              #
#    Updated: 2023/01/25 21:23:14 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
		Harl.cpp

OBJ = $(SRC:.cpp=.o) 

all : $(NAME)

$(NAME) : $(OBJ)
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean : 
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 
