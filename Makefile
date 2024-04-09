# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 20:27:07 by mkhaing           #+#    #+#              #
#    Updated: 2024/04/10 04:00:48 by mkhaing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#                       _oo0oo_
#                      o8888888o
#                      88" . "88
#                      (| -_- |)
#                      0\  =  /0
#                    ___/`---'\___
#                  .' \\|     |// '.
#                 / \\|||  :  |||// \
#                / _||||| -:- |||||- \
#               |   | \\\  -  /// |   |
#               | \_|  ''\---/''  |_/ |
#               \  .-\__  '-'  ___/-. /
#             ___'. .'  /--.--\  `. .'___
#          ."" '<  `.___\_<|>_/___.' >' "".
#         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
#         \  \ `_.   \_ __\ /__ _/   .-` /  /
#     =====`-.____`.___ \_____/___.-`___.-'=====
#                       `=---='
#
#
#     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#               佛祖保佑         永无BUG
#

SRC_DIR=src/
INCLUDE_DIR=include/

CC		= clang
CFLAGS	= -Wall -Wextra -Werror -I$(INCLUDE_DIR)
OPTI	= -O3 -march=native -funroll-loops -pipe -ffast-math

RM		= rm -f

SRCS	= $(wildcard $(SRC_DIR)ft_is/*.c) \
          $(wildcard $(SRC_DIR)ft_lst/*.c) \
          $(wildcard $(SRC_DIR)ft_mem/*.c) \
          $(wildcard $(SRC_DIR)ft_printf/*.c) \
          $(wildcard $(SRC_DIR)ft_put/*.c) \
          $(wildcard $(SRC_DIR)ft_str/*.c) \
          $(wildcard $(SRC_DIR)ft_to/*.c) \
          $(wildcard $(SRC_DIR)gnl/*.c) \
          $(wildcard $(SRC_DIR)ft_gz/*.c) \
          $(wildcard $(SRC_DIR)burma_mhu_pyu/*.c)

OBJS	= ${SRCS:.c=.o}

NAME	= byamc.a

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

so:			${OBJS}
			$(CC) $(CFLAGS) $(OPTI) -shared -o byamc.so $(OBJS)

%.o: %.c
			$(CC) -fPIC $(OPTI) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
