# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 19:27:04 by dbessa            #+#    #+#              #
#    Updated: 2023/10/22 19:37:10 by dbessa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= libftprintf.a

SRCS	= ft_printf.c srcs/ft_strchr.c srcs/check_argument.c srcs/ft_putchar.c \
			srcs/ft_puthexa.c srcs/ft_putnbr.c srcs/ft_putstr.c \
			srcs/ft_putunsnbr.c \

OBJS	= $(SRCS:.c=.o)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re