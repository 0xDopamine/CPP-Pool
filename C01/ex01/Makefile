TARGET = Zombie

CPP = main.cpp

OBJS = $(CPP:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror

INCLUDE = include/

DEL = rm -rf

all: $(TARGET)
	

%.o: %.c
	g++ $(FLAGS) -c -I $(INCLUDE) $< -o $@

$(TARGET): $(OBJS) $(INCLUDE)
	g++ $(FLAGS) -I $(INCLUDE) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean:	clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all