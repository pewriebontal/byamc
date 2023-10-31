# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 20:27:07 by mkhaing           #+#    #+#              #
#    Updated: 2023/11/01 02:24:01 by mkhaing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memmove.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memchr.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_substr.c \
		  ft_split.c \
		  ft_strtrim.c \
		  ft_strjoin.c \
		  ft_strmapi.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strrchr.c \
		  ft_strnstr.c \
		  ft_strncmp.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_itoa.c \
		  ft_strloc.c

OBJS	= ${SRCS:.c=.o}

BSRCS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstadd_back.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstclear.c \
		  ft_lstdelone.c \
		  ft_lstiter.c \
		  ft_lstmap.c

BOBJS	= ${BSRCS:.c=.o}


NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -std=c99

RM		= rm -f

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -c ${SRCS}
			ar rc ${NAME} ${OBJS} 

all:		${NAME} bonus

clean:
			${RM} ${OBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${BOBJS}
			${CC} ${CFLAGS} -c ${BSRCS}
			ar rc ${NAME} ${BOBJS}

.PHONY:		all clean fclean re
