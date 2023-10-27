# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 14:20:22 by sriyani           #+#    #+#              #
#    Updated: 2021/12/02 14:24:35 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = ft_printf.h

SRCS =	ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putnbrunsigned.c\
		ft_putnbrlowehex.c\
		ft_putnbruperhex.c\
		ft_printaddress.c\
		ft_printf.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJCS) $(LIB)
		@ar -rc $(NAME) $(OBJCS)
		@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJCS)

fclean: clean
	@/bin/rm -f $(NAME)

re : fclean all   
 

