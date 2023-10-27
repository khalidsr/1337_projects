# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 18:38:27 by sriyani           #+#    #+#              #
#    Updated: 2021/11/27 09:23:58 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = libft.h

SRCS =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_substr.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_strmapi.c\
		ft_split.c

CC = gcc

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
 
