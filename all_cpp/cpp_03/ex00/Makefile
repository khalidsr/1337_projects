# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 11:05:34 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 11:22:15 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaand..._OPEN!

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Werror

SRC = main.cpp\
		ClapTrap.cpp

HEADERS = ClapTrap.hpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADERS)
		$(CPP) $(CPPFLAGS) $(SRC) -o  $(NAME)

clean: 
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
