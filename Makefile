NAME	=libft.a
FLAGS	=-Wall -Wextra - Werror
CC		=clang

HEADER	=libft.h
SRC		=ft_strlen.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_toupper.c \

SRCBNS	=

OBJECTS	=$(SRC:.c=.o)

%.o .c $(HEADER)
	$(CC) $(NAME) $(OBJECTS)

all: $(NAME)

bonus:
	@make OBJECTS="$(OBJECTS) $(BONUS_OBJS)" all

clean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus