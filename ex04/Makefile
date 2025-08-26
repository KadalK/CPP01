NAME = Looser
CPP= c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp sed.cpp

$(NAME): $(SRCS) Makefile
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re : clean all

.PHONY: all clean fclean re