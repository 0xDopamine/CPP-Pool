#* TARGET *#
TARGET = Zombie

#*SOURCE FILES *#
CPP = main.cpp

#* READLINE PATH *#

#* OBJECT FILES *#
OBJS = $(CPP:%.c=%.o)

#* FLAGS *#
FLAGS = -Wall -Wextra -Werror

#* parse FILES *#
INCLUDE = include/

#* DELETE *#
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