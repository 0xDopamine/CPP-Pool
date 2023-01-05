TARGET = templates

SRCS = main.cpp 

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = g++ $(FLAGS)

DEL = rm -rf

all: $(TARGET)

%.o: %.cpp
	g++ $(FLAGS) -c  $< -o $@

$(TARGET): $(OBJS)
		g++ $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all