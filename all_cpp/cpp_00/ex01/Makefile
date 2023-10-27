# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 19:15:14 by sriyani           #+#    #+#              #
#    Updated: 2023/01/24 18:08:06 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_awsome_phone_book

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra 

SRC = main.cpp\
	  Contact.cpp\
	  PhoneBook.cpp

HEADERS =  Contact.hpp\
	  	PhoneBook.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADERS)
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean :
		@/bin/rm -rf $(OBJ)

fclean : clean
		@/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

