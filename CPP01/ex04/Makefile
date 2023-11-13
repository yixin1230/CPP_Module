# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/08 10:57:03 by yizhang       #+#    #+#                  #
#    Updated: 2023/11/13 17:52:33 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Zombie.cpp zombieHorde.cpp

all:$(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean