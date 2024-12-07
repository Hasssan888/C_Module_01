# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 13:20:38 by hbakrim           #+#    #+#              #
#    Updated: 2024/12/05 13:20:41 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGC = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}
NAME = main

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
