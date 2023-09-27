# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nakanoun <nakanoun@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/27 17:57:41 by nakanoun      #+#    #+#                  #
#    Updated: 2023/09/27 17:57:41 by nakanoun      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= ThisIsBrain
CXX		:= g++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

OBJ_DIR	:= obj


FILES	:= main 
SRCS	:= $(FILES:=.cpp)

OBJS	:= $(addprefix $(OBJ_DIR)/,$(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CXX) $(OBJS) -o $(NAME)
	@printf "$(NAME) executable ready\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(OBJ_DIR)/%.o: %.cpp 
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@printf "Removed .o files successfully.\n"

fclean: clean
	@rm $(NAME)
	@printf "Removed $(NAME) successfully.\n"

re: fclean all