# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 22:21:38 by oubelhaj          #+#    #+#              #
#    Updated: 2022/10/30 17:18:38 by oubelhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_isalnum.c ft_isprint.c ft_memmove.c ft_putnbr_fd.c ft_strlcat.c \
		ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c \
		ft_putstr_fd.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c \
		ft_putchar_fd.c ft_strchr.c ft_strlen.c  ft_calloc.c ft_isdigit.c ft_substr.c \
		ft_memcpy.c ft_putendl_fd.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c 

OBJS = ${SRCS:.c=.o}

BOBJS = ${BSRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar r ${NAME} ${OBJS}

bonus: ${BOBJS} ${NAME}
	ar r ${NAME} ${BOBJS}

clean:
	rm -rf ${OBJS} ${BOBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY : all clean fclean re bonus
