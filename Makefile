# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 14:46:34 by 0xNino            #+#    #+#              #
#    Updated: 2021/11/23 15:58:16 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT	=	includes/libft
SRC		=	srcs

SRCS	=	$(SRC)/ft_hexlen.c \
			$(SRC)/ft_htoc.c \
			$(SRC)/ft_itoh.c \
			$(SRC)/ft_printf.c \
			$(SRC)/ft_putchar_len.c \
			$(SRC)/ft_puthex_len.c \
			$(SRC)/ft_putnbr_len.c \
			$(SRC)/ft_putstr_len.c \

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
CC		= cc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		make -sC ./includes/libft/
		cp includes/libft/libft.a .
		mv libft.a $(NAME)
		ar rcs  $(NAME) $(OBJS)

all:	$(NAME)

clean:
		$(RM) $(OBJS)
		make -sC ./includes/libft/ clean

fclean:	clean
		$(RM) $(NAME)
		make -sC ./includes/libft/ fclean

re:		fclean all

.PHONY:	all clean fclean re