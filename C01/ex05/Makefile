TARGET = Harl

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra

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