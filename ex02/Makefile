
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -Wshadow
CC = c++
FILE = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
NAME = main 

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
