CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS=$(SRCS:.c=.o)
BIN= libft.a

.PHONY: all clean fclean

all: $(BIN)

$(BIN): $(OBJS)
	ar rcs ${BIN} ${OBJS}

%.o: %.c 
	$(CC) -I $(INCLUDES) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

re: fclean all

