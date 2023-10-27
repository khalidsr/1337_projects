# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sriyani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 10:43:21 by sriyani           #+#    #+#              #
#    Updated: 2022/03/28 10:43:25 by sriyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = so_long
BONUS = so_long_bonus

LIB = so_long.h
LIBB = so_long_bonus.h

SRCS =	so_long.c\
      so_long_utils.c\
      so_long_utils1.c\
      so_long_utils2.c\
      so_long_utils3.c\
      so_long_utils4.c\
      so_long_utils5.c\
      so_long_utils6.c\
      get_next_line.c\
      get_next_line_utils.c\
      ft_printf.c\
      ft_printf2.c

SRCB =  so_long_bonus.c\
      so_long_bonus_utils.c\
      so_long_bonus_utils1.c\
      so_long_bonus_utils2.c\
      so_long_bonus_utils3.c\
      so_long_bonus_utils4.c\
      so_long_bonus_utils5.c\
      so_long_bonus_utils6.c\
       so_long_bonus_utils7.c\
      get_next_line.c\
      get_next_line_utils.c\
      ft_printf.c\
      ft_printf2.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJCS = $(SRCS:.c=.o)
OBJCBS = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) $(LIB) 
		$(CC) $(CFLAGS)  -lmlx -framework OpenGL -framework AppKit -o $(NAME) $(SRCS)
		
bonus: $(BONUS)

$(BONUS): $(SRCB) $(LIBB) 
		$(CC) $(CFLAGS)  -lmlx -framework OpenGL -framework AppKit -o $(BONUS) $(SRCB)

clean:
	@/bin/rm -f $(OBJCS)
	@/bin/rm -f $(OBJCBS)

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(BONUS)


re : fclean all bonus

.PHONY: all bonus clean fclean re
