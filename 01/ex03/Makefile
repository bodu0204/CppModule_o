CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
TARGET	= Unnecessary_violence
SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all	: $(TARGET)

$(TARGET)	: $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(TARGET)
re : fclean all
