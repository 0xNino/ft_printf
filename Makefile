# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 14:46:34 by 0xNino            #+#    #+#              #
#    Updated: 2021/11/17 17:55:41 by 0xNino           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	includes/libft
FT_PRINTF	=	srcs/ft_printf

CFILES		=	$(FT_PRINTF)/ft_hexlen.c \
				$(FT_PRINTF)/ft_htoc.c \
				$(FT_PRINTF)/ft_itoh.c \
				$(FT_PRINTF)/ft_printf.c \
				$(FT_PRINTF)/ft_putchar_len.c \
				$(FT_PRINTF)/ft_puthex_len.c \
				$(FT_PRINTF)/ft_putnbr_len.c \
				$(FT_PRINTF)/ft_putstr_len.c \
				$(LIBFT)/ft_atoi.c \
				$(LIBFT)/ft_bzero.c \
				$(LIBFT)/ft_calloc.c \
				$(LIBFT)/ft_intlen.c \
				$(LIBFT)/ft_isalnum.c \
				$(LIBFT)/ft_isalpha.c \
				$(LIBFT)/ft_isascii.c \
				$(LIBFT)/ft_isdigit.c \
				$(LIBFT)/ft_isprint.c \
				$(LIBFT)/ft_itoa.c \
				$(LIBFT)/ft_lstadd_back.c \
				$(LIBFT)/ft_lstadd_front.c \
				$(LIBFT)/ft_lstclear.c \
				$(LIBFT)/ft_lstdelone.c \
				$(LIBFT)/ft_lstiter.c \
				$(LIBFT)/ft_lstlast.c \
				$(LIBFT)/ft_lstmap.c \
				$(LIBFT)/ft_lstnew.c \
				$(LIBFT)/ft_lstsize.c \
				$(LIBFT)/ft_memchr.c \
				$(LIBFT)/ft_memcmp.c \
				$(LIBFT)/ft_memcpy.c \
				$(LIBFT)/ft_memmove.c \
				$(LIBFT)/ft_memset.c \
				$(LIBFT)/ft_putchar_fd.c \
				$(LIBFT)/ft_putchar.c \
				$(LIBFT)/ft_putendl_fd.c \
				$(LIBFT)/ft_putnbr_base.c \
				$(LIBFT)/ft_putnbr_fd.c \
				$(LIBFT)/ft_putnbr.c \
				$(LIBFT)/ft_putstr_fd.c \
				$(LIBFT)/ft_putstr.c \
				$(LIBFT)/ft_split.c \
				$(LIBFT)/ft_strchr.c \
				$(LIBFT)/ft_strdup.c \
				$(LIBFT)/ft_striteri.c \
				$(LIBFT)/ft_strjoin.c \
				$(LIBFT)/ft_strlcat.c \
				$(LIBFT)/ft_strlcpy.c \
				$(LIBFT)/ft_strlen.c \
				$(LIBFT)/ft_strmapi.c \
				$(LIBFT)/ft_strncmp.c \
				$(LIBFT)/ft_strnstr.c \
				$(LIBFT)/ft_strrchr.c \
				$(LIBFT)/ft_strtrim.c \
				$(LIBFT)/ft_substr.c \
				$(LIBFT)/ft_tolower.c \
				$(LIBFT)/ft_toupper.c \

HFILES		=	ft_printf.h \
				$(LIBFT)/libft.h \

SRCS		=	$(CFILES) $(HFILES)
OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
