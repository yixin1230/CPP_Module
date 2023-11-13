# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/26 10:26:19 by yizhang       #+#    #+#                  #
#    Updated: 2023/11/13 12:37:09 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Dreamjob
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Account.cpp main.cpp
HEADER = Account.hpp

all: $(NAME)

$(NAME):$(SRC) $(HEADER)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean