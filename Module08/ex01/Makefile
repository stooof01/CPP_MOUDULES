# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 21:35:51 by mmardi            #+#    #+#              #
#    Updated: 2022/11/11 19:35:12 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   Span

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

HEADER = Span.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o: %.cpp  $(HEADER)
	c++ $(CFLAGS) -o $@  -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all