# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 13:00:05 by dmanuel-          #+#    #+#              #
#    Updated: 2024/09/04 15:11:21 by dmanuel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp
OBJS=$(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
		@ $(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		@ $(RM) $(NAME)

fclean:
		@ $(RM) $(NAME)

re: clean all
