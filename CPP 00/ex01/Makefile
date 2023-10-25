# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 13:00:05 by dmanuel-          #+#    #+#              #
#    Updated: 2023/10/25 13:00:08 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
		@ $(CC) $(FLAGS) Phone.cpp Contacts.cpp PhoneBook.cpp Contacts.hpp PhoneBook.hpp -o $(NAME)

clean:
		@ $(RM) $(NAME)

fclean:
		@ $(RM) $(NAME)

re: clean all
