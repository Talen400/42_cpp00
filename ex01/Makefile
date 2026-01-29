NAME := phone
CC := c++
CFLAGS := -Wextra -Wall -Werror -std=c++98

SRC := phone.cpp contact.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

$($OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
