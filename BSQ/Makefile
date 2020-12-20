# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgale <kgale@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/31 12:25:37 by kstephai          #+#    #+#              #
#    Updated: 2020/09/02 21:07:35 by kgale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
HEAD_SRCS = ./srcs/
HEAD_INCLUDES = ./includes/
SRCS = ${HEAD_SRCS}*.c
OBJ = main.o ft_str.o ft_str_mistakes.o ft_square.o ft_open_and_read.o ft_valid_2.o ft_valid_1.o
INCLUDES = ${HEAD_INCLUDES}*.h
GCC = gcc
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I${INCLUDES}
RM = rm -f

all: ${NAME}

${NAME}:
	${GCC} ${FLAGS} ${OPTIONS} -c ${SRCS} main.c
	${GCC} ${FLAGS} ${OPTIONS} ${OBJ} -o ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
