# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 10:26:19 by yizhang       #+#    #+#                  #
#    Updated: 2023/11/07 10:45:45 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Dreamjob
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Account.cpp main.cpp
HEADER = Account.hpp

all: $(NAME)

$(NAME):$(SRC) $(HEADER)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

.PHONY: all clean