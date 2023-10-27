# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 16:13:57 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 21:05:14 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Now_its_weird!

CPP = c++

CPPFLAGS = -std=c++98 -Wshadow  -Wall -Werror -Werror

SRC = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

HEADERS = ClapTrap.hpp\
			ScavTrap.hpp\
			FragTrap.hpp\
			DiamondTrap.hpp\

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
