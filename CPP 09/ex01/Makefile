# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 13:00:05 by dmanuel-          #+#    #+#              #
#    Updated: 2024/09/18 14:38:09 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp
OBJS=$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
		@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@ $(RM) $(OBJS)

fclean:	clean
		@ $(RM) $(NAME)

re: clean fclean all
