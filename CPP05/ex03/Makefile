# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yizhang <yizhang@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/18 13:13:37 by yizhang       #+#    #+#                  #
#    Updated: 2024/02/15 23:15:10 by yizhang       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = c++
FLAG = -Wall -Werror -Wextra #-fsanitize=address
SRC = main.cpp Aform.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean