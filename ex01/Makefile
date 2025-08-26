NAME = Zombie
CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
OBJ_DIR = objs/
SRC_DIR = .
INC_DIR = include

SRC_FILES = src/zombieHorde.cpp src/Zombie.cpp src/main.cpp
INC_FILES = inc/Zombie.hpp

OBJS = $(addprefix $(OBJ_DIR),$(SRC_FILES:.cpp=.o))
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I $(INC_DIR) -MMD -MP -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)