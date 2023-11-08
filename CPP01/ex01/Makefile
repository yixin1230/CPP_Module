# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/08 10:57:03 by yizhang       #+#    #+#                  #
#    Updated: 2023/11/08 11:01:17 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Moar_Brains
CC = c++
FLAG = -Wall -Werror -Wextra
SRC = main.cpp Zombie.cpp zombieHorde.cpp

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean
	$(MAKE)

.PHONY: all clean