# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nakanoun <nakanoun@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/27 18:19:37 by nakanoun      #+#    #+#                  #
#    Updated: 2023/09/27 18:19:37 by nakanoun      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	@rm -f $(NAME)
	@printf "Removed $(NAME) successfully.\n"

fclean: clean

re: fclean all