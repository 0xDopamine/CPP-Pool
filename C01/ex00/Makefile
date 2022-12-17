TARGET = Zombie

CPP = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(CPP:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDE = include/

DEL = rm -rf

all: $(TARGET)

%.o: %.c
	g++ $(FLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean:	clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all