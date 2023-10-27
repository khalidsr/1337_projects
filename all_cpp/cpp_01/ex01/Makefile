# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 18:03:29 by sriyani           #+#    #+#              #
#    Updated: 2023/01/25 20:19:52 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz!

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
	 Zombie.cpp\
	 zombieHorde.cpp\

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
