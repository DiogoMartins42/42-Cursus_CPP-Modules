# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 13:00:05 by dmanuel-          #+#    #+#              #
#    Updated: 2024/09/14 14:01:33 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp ScalarConverter.cpp
OBJS=$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
		@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@ $(RM) $(OBJS)

fclean:	clean
		@ $(RM) $(NAME)

re: clean fclean all
