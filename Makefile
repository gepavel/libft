
name = libft

CC=clang

CFLAGS=-Wall -Eerror -Wextra

NAMELIB=libft.h

MAKELIB=ar rcs

SRC=ft_function

OBJ= $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ) $(NAMELIB)
	$(MAKELIB) $(NAMELIB) $(OBJ)


