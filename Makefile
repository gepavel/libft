
NAME = libft.a

CC=clang

CFLAGS=-Wall -Werror -Wextra

NAMELIB=libft.h

MAKELIB=ar rcs

SRC =    ft_putchar_fd.c

OBJ= $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ) $(NAMELIB)
	$(MAKELIB) $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(NAMELIB) $(SRC) main.c 
clean:
	rm -fr $(OBJ)
fclean: clean 
	rm -r $(NAME)
re: fclean all


