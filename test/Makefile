# CC = cc
# FLAGC = -Wall -Wextra -Werror
# NAME = prg
# SRC = main.c add.c sub.c mul.c 
# OBJ = ${SRC:.c=.o}

# all: ${NAME}

# ${NAME}: ${OBJ}
# 	${CC} ${FLAGC} -o $@ $^
# %.o: %.c
# 	${CC} ${FLAGC} -o $@ -c $<

# clean: ${OBJ}
# 	rm -f $^
# fclean: clean
# 	rm -f ${NAME}


main.o: main.c
	cc -Wall -Wextra -Werror -o main.o -c main.c
add.o: add.c
	cc -Wall -Wextra -Werror -o add.o -c add.c
mul.o: mul.c
	cc -Wall -Wextra -Werror -o mul.o -c mul.c
sub.o: sub.c
	cc -Wall -Wextra -Werror -o sub.o -c sub.c
pg: main.o add.o sub.o mul.o
	cc -Wall -Wextra -Werror -o pg main.o add.o mul.o sub.o 
