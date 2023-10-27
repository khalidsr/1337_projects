# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 20:18:40 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 10:50:35 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = TAMUFPNC

CPP = C++

HEADERS = ./Fixed.hpp

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
		$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

