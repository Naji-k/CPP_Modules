NAME = megaphone

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : megaphone.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(NAME)