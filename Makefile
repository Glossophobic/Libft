# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oubelhaj <oubelhaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 22:21:38 by oubelhaj          #+#    #+#              #
#    Updated: 2022/10/18 22:27:27 by oubelhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_isalnum.c ft_isprint.c ft_memmove.c ft_putnbr_fd.c ft_strlcat.c \
		ft_strnstr.c ft_toupper.c ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c \
		ft_putstr_fd.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isascii.c ft_memcmp.c \
		ft_putchar_fd.c ft_strchr.c ft_strlen.c  ft_calloc.c ft_isdigit.c ft_substr.c \
		ft_memcpy.c ft_putendl_fd.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_strjoin.c \
		ft_strtrim.c ft_split.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY : all clean fclean re
