# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 18:57:09 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 11:31:31 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena,_my_love!

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Werror

SRC = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp

HEADERS = ClapTrap.hpp\
			ScavTrap.hpp

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
