TARGET = Brain

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = c++ $(FLAGS)

DEL = rm -rf

all: $(TARGET)

%.o: %.cpp
	c++ $(FLAGS) -c  $< -o $@

$(TARGET): $(OBJS)
		c++ $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all