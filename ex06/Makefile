CPP = c++
FLAGC = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
OBJ = ${SRC:.cpp=.o}
NAME = harlFilter

all: ${NAME}

${NAME} : ${OBJ}
	${CPP} ${FLAGC} -o ${NAME} ${OBJ}

%.o : %.cpp
	${CPP} ${FLAGC} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

ret: fclean all