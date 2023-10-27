# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 17:51:28 by sriyani           #+#    #+#              #
#    Updated: 2023/01/29 11:25:41 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat

CPP = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp\
		Bureaucrat.cpp

HEADERS = Bureaucrat.hpp

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