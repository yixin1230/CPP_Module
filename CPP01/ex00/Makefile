# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/07 17:27:06 by yizhang       #+#    #+#                  #
#    Updated: 2023/12/22 17:25:35 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
FLAG = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
CC = c++
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean
	