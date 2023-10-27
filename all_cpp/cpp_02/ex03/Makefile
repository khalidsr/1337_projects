# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 11:44:59 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 10:12:12 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Is_not_BSP

CPP = C++

CPPFLAGS = -std=c++98 -Wall -Werror -Werror

SRC = main.cpp\
		Fixed.cpp\
		Point.cpp\
		bsp.cpp

HEADERS = fixed.hpp\
			Point.hpp

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
