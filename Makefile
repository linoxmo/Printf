NAME = libftprintf.a

CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_putchar.c ft_putstr.c ft_printf.c\
ft_putnbr.c ft_putup.c ft_puthexa.c
OBJ =	$(SRC:.c=.o)

all :	$(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ) 

fclean : clean
	rm -rf $(NAME)
clean:
	rm -f $(OBJ)

re: fclean all

