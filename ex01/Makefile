# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 13:21:27 by hbakrim           #+#    #+#              #
#    Updated: 2024/12/05 13:21:29 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGC = -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJ = ${SRC:.cpp=.o}
NAME = ZombieHorde 

all: ${NAME}

${NAME} : ${OBJ}
	${CPP} ${FLAGC} -o ${NAME} ${OBJ}

%.o : %.cpp
	${CPP} ${FLAGC} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
