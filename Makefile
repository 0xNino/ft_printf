# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 14:46:34 by 0xNino            #+#    #+#              #
#    Updated: 2021/11/19 13:41:44 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT		=	includes/libft
FT_PRINTF	=	srcs

SRCS		=	$(FT_PRINTF)/ft_hexlen.c \
				$(FT_PRINTF)/ft_htoc.c \
				$(FT_PRINTF)/ft_itoh.c \
				$(FT_PRINTF)/ft_printf.c \
				$(FT_PRINTF)/ft_putchar_len.c \
				$(FT_PRINTF)/ft_puthex_len.c \
				$(FT_PRINTF)/ft_putnbr_len.c \
				$(FT_PRINTF)/ft_putstr_len.c \

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