NAME = so_long
SRCS = so_long.c file_validate.c helpers.c
OBJS = $(SRCS:.c:.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

NAME : OBJS
	$(CC) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all NAME clean fclean re

