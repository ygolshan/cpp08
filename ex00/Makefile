# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 15:32:47 by ygolshan          #+#    #+#              #
#    Updated: 2024/02/18 15:33:17 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CXX = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)