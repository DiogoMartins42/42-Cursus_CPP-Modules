# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 11:09:00 by dmanuel-          #+#    #+#              #
#    Updated: 2023/10/25 11:12:34 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
		@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
		@ $(RM) $(NAME)

fclean:
		@ $(RM) $(NAME)

re: clean all