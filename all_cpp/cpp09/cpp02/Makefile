# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 16:34:10 by sriyani           #+#    #+#              #
#    Updated: 2023/05/06 10:12:09 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

CPP = c++ 

CPPFLAGS = -g3 -std=c++98 #-Wall -Werror -Wextra

SRC = main.cpp\
		PmergeMe.cpp

HEADERS = PmergeMe.hpp
			

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