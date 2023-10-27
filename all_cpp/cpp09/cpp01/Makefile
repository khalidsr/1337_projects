# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 13:26:27 by sriyani           #+#    #+#              #
#    Updated: 2023/05/01 13:35:20 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = RPN

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
		RPN.cpp

HEADERS = RPN.hpp
			

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