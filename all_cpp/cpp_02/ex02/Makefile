# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 18:53:40 by sriyani           #+#    #+#              #
#    Updated: 2023/01/27 10:11:33 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Now_we_are_talking

CPP = C++

CPPFLAGS = -std=c++98 -Wall -Werror -Werror

SRC = main.cpp\
		Fixed.cpp

HEADERS = fixed.hpp\

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
