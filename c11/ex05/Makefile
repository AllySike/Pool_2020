NAME = do-op

${NAME}:
			gcc -Wall -Wextra -Werror -c do_op.c
			gcc -Wall -Wextra -Werror do_op.o -o ${NAME}
all:		${NAME}

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)
