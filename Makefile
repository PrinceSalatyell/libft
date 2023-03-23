# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josanton <josanton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/28 20:11:39 by josanton          #+#    #+#              #
#    Updated: 2022/02/28 20:11:39 by josanton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	ft_isascii.c		\
			ft_memcpy.c			\
			ft_putstr_fd.c		\
			ft_strlcat.c		\
			ft_strrchr.c		\
			ft_atoi.c			\
			ft_atoll.c			\
			ft_isdigit.c		\
			ft_memmove.c		\
			ft_split.c			\
			ft_quicksort.c		\
			ft_swap.c			\
			ft_strlcpy.c		\
			ft_strncpy.c		\
			ft_strtrim.c		\
			ft_bzero.c			\
			ft_isprint.c		\
			ft_memset.c			\
			ft_strchr.c			\
			ft_strlen.c			\
			ft_substr.c			\
			ft_calloc.c			\
			ft_itoa.c			\
			ft_putchar_fd.c		\
			ft_strdup.c			\
			ft_strmapi.c		\
			ft_tolower.c		\
			ft_isalnum.c		\
			ft_memchr.c			\
			ft_putendl_fd.c		\
			ft_striteri.c		\
			ft_strncmp.c		\
			ft_strcmp.c			\
			ft_toupper.c		\
			ft_isalpha.c		\
			ft_memcmp.c			\
			ft_putnbr_fd.c		\
			ft_strjoin.c		\
			ft_strjoin_sep.c	\
			ft_strnstr.c		\
			ft_first_word.c		\
			ft_last_word.c		\
			ft_printf.c			\
			get_next_line.c

OBJS	= ${SRCS:.c=.o}

BONUS	=	ft_lstadd_front.c	\
			ft_lstnew.c			\
			ft_lstsize.c		\
			ft_lstadd_back.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c

B_OBJS	=	${BONUS:.c=.o}

NAME	= libft.a

CC		= gcc

AR		= ar rcs

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

#COLORS

COLOUR_GREEN=\033[7;1;32m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[7;1;33m

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	@${AR} ${NAME} ${OBJS}
	@echo "$(COLOUR_GREEN) >>> LIBFT OK <<< $(COLOUR_END)"

bonus:		${OBJS} ${B_OBJS}
			${AR} ${NAME} ${OBJS} ${B_OBJS}

all:		${NAME}

clean:
	@${RM} ${OBJS} ${B_OBJS}
	@echo "$(COLOUR_YELLOW) >>> OBJS CLEANED <<< $(COLOUR_END)"

fclean:		clean
	@${RM} ${NAME}
	@echo "$(COLOUR_YELLOW) >>> ALL CLEANED <<< $(COLOUR_END)"

re:			fclean all

.PHONY:		all clean fclean re
