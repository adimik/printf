# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 11:44:59 by didimitr          #+#    #+#              #
#    Updated: 2024/11/20 13:26:09 by didimitr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_print_c.c ft_print_d.c ft_print_p.c ft_print_s.c ft_print_u.c \
		ft_print_x.c ft_print_X.c ft_printf.c

OBJS = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) ft_printf.so

re: fclean all

.PHONY: all clean fclean re
