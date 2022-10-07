NAME = push_swap

SRC = atoi.c\
		check.c\
		commands.c\
		push.c\
		push_swap.c\
		reverse_rotate.c\
		rotate.c\
		sort.c\
		sort_100_500.c\
		swap.c\
		function.c

OBJ = $(SRC:.c=.o)

HDRS = push_swap.h

CC = gcc -g

FLAGS = -Wall -Wextra -Werror

RM = rm -f


all: $(NAME)

$(NAME): $(HDRS) $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all
