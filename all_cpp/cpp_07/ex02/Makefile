# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 10:02:01 by sriyani           #+#    #+#              #
#    Updated: 2023/02/01 17:46:29 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\

HEADERS = Array.hpp\
			

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	

$(NAME): $(OBJ) $(HEADERS)
		$(CPP) $(CPPFLAGS) $(SRC)  -o $(NAME)

clean: 
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re