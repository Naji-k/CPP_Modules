# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nakanoun <nakanoun@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/27 18:15:09 by nakanoun      #+#    #+#                  #
#    Updated: 2023/09/27 18:15:09 by nakanoun      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= weapon_attack
CXX		:= g++
CXXFLAGS:= -Wall -Werror -Wextra -Iinclude -std=c++98

#Directories
OBJ_DIR	:= obj
SRC_DIR	:= src
INC_DIR := include

SRCS	:= $(wildcard $(SRC_DIR)/*.cpp)
HDRS	:= $(wildcard $(INC_DIR)/*.hpp)
OBJS	:= $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HDRS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ_DIR) $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJS)
	@printf "compiled $(NAME) successfully.\n"


clean:
	@rm -rf $(OBJ_DIR)
	@printf "Removed .o files successfully.\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "Removed $(NAME) successfully.\n"

re: fclean all