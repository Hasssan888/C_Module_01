CPP = c++
FLAGC = -Wall -Wextra -Werror #-std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Weapon

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