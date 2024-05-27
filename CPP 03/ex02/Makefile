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

NAME = FragTrap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp


all: $(NAME)

$(NAME): $(OBJS) 
		@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@ $(RM) $(NAME)

fclean:
		@ $(RM) $(NAME)

re: clean all
