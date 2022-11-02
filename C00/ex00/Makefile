TARGET = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra

CC = c++ $(FLAGS)

DEL = rm -rf

all = $(TARGET)

%.o: %.c
	cc $(FLAGS) -c  $< -o $@

$(TARGET): $(OBJS)
		cc $(FLAGS) $(OBJS) -o $(TARGET)

re: fclean all

clean:
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(TARGET)

.PHONY: clean fclean re all
