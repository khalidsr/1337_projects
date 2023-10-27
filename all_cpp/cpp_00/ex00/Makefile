# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 14:15:45 by sriyani           #+#    #+#              #
#    Updated: 2022/12/08 18:19:02 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPP = c++ 

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp\
 
all : $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ) 
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
