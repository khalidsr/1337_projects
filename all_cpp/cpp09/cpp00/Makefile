# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 12:21:41 by sriyani           #+#    #+#              #
#    Updated: 2023/05/01 11:53:27 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
		BitcoinExchange.cpp

HEADERS = BitcoinExchange.hpp
			

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