CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
TARGET	= Aaaaand_OPEN
SRCS	= main.cpp ClapTrap.cpp

all	: $(TARGET)

$(TARGET)	: $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(OBJS) $(TARGET)

re : fclean all
