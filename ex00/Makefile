NAME = btc
FLAGS = c++ -Wall -Werror -Wextra -std=c++98

SRC = main.cpp \
		BitcoinExchange.cpp

OBJECTS		= $(SRC:.cpp=.o)

all:
	@$(MAKE) $(NAME)

$(NAME): $(OBJECTS)
	@$(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean r