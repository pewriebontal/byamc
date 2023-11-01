# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 20:27:07 by mkhaing           #+#    #+#              #
#    Updated: 2023/11/02 00:28:04 by mkhaing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR=src/

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

FT_IS_SRC=$(SRC_DIR)ft_is/ft_isalnum.c \
		  $(SRC_DIR)ft_is/ft_isalpha.c \
		  $(SRC_DIR)ft_is/ft_isascii.c \
		  $(SRC_DIR)ft_is/ft_isdigit.c \
		  $(SRC_DIR)ft_is/ft_isprint.c

FT_LST_SRC=$(SRC_DIR)ft_lst/ft_lstnew.c \
		  $(SRC_DIR)ft_lst/ft_lstadd_front.c \
		  $(SRC_DIR)ft_lst/ft_lstadd_back.c \
		  $(SRC_DIR)ft_lst/ft_lstsize.c \
		  $(SRC_DIR)ft_lst/ft_lstlast.c \
		  $(SRC_DIR)ft_lst/ft_lstclear.c \
		  $(SRC_DIR)ft_lst/ft_lstdelone.c \
		  $(SRC_DIR)ft_lst/ft_lstiter.c \
		  $(SRC_DIR)ft_lst/ft_lstmap.c

FT_MEM_SRC=$(SRC_DIR)ft_mem/ft_bzero.c \
		  $(SRC_DIR)ft_mem/ft_calloc.c \
		  $(SRC_DIR)ft_mem/ft_memmove.c \
		  $(SRC_DIR)ft_mem/ft_memcmp.c \
		  $(SRC_DIR)ft_mem/ft_memcpy.c \
		  $(SRC_DIR)ft_mem/ft_memchr.c \
		  $(SRC_DIR)ft_mem/ft_memset.c

FT_PRINT_SRC=$(SRC_DIR)ft_printf/ft_printf.c \
		 $(SRC_DIR)ft_printf/ft_printf_utils.c \
		 $(SRC_DIR)ft_printf/ft_printf_utils_1.c

FT_PUT_SRC=$(SRC_DIR)ft_put/ft_putchar_fd.c \
		  $(SRC_DIR)ft_put/ft_putchar.c \
		  $(SRC_DIR)ft_put/ft_putstr_fd.c \
		  $(SRC_DIR)ft_put/ft_putendl_fd.c \
		  $(SRC_DIR)ft_put/ft_putnbr_fd.c \
		  $(SRC_DIR)ft_put/ft_putnbr_base.c

FT_STR_SRC=$(SRC_DIR)ft_str/ft_substr.c \
		  $(SRC_DIR)ft_str/ft_split.c \
		  $(SRC_DIR)ft_str/ft_strtrim.c \
		  $(SRC_DIR)ft_str/ft_strjoin.c \
		  $(SRC_DIR)ft_str/ft_strmapi.c \
		  $(SRC_DIR)ft_str/ft_strchr.c \
		  $(SRC_DIR)ft_str/ft_strdup.c \
		  $(SRC_DIR)ft_str/ft_striteri.c \
		  $(SRC_DIR)ft_str/ft_strlcat.c \
		  $(SRC_DIR)ft_str/ft_strlcpy.c \
		  $(SRC_DIR)ft_str/ft_strlen.c \
		  $(SRC_DIR)ft_str/ft_strrchr.c \
		  $(SRC_DIR)ft_str/ft_strnstr.c \
		  $(SRC_DIR)ft_str/ft_strncmp.c \
		  $(SRC_DIR)ft_str/ft_strloc.c

FT_TO_SRC=$(SRC_DIR)ft_to/ft_atoi.c \
		  $(SRC_DIR)ft_to/ft_tolower.c \
		  $(SRC_DIR)ft_to/ft_toupper.c \
		  $(SRC_DIR)ft_to/ft_itoa.c

SRCS	= $(FT_IS_SRC) $(FT_LST_SRC) $(FT_MEM_SRC) $(FT_PRINT_SRC) $(FT_PUT_SRC) $(FT_STR_SRC) $(FT_TO_SRC)

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
