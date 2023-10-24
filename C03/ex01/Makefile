
NAME	:= main
CXX		:= g++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

OBJ_DIR	:= obj

HDRS	:= $(find -iname "*.hpp")
FILES	:= main ClapTrap ScavTrap
SRCS	:= $(FILES:=.cpp)

OBJS	:= $(addprefix $(OBJ_DIR)/,$(FILES:=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)  $(HDRS)
	@$(CXX) $(OBJS) -o $(NAME)
	@printf "$(NAME) executable ready\n"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(OBJ_DIR)/%.o: %.cpp $(HDRS)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@printf "Removed .o files successfully.\n"

fclean: clean
	@rm $(NAME)
	@printf "Removed $(NAME) successfully.\n"

re: fclean all