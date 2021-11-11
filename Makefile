CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
LFLAGS	= -L./libft/ -lft
MAKELIB	= make -C libft/
RM		= rm -f
NAME	= push_swap
HEAD	= main.h
SRC		= \
main.c check_input.c create_stack.c sort_big_stack.c check_stack.c \
push.c swap.c rotate.c reverse_rotate.c libft/ft_atoi.c libft/ft_lstnew.c \
libft/ft_lstadd_front.c libft/ft_lstadd_back.c libft/ft_lstlast.c free.c \
nbr_bits.c libft/ft_isdigit.c libft/ft_strlen.c libft/ft_strncmp.c \
sort_small_stack.c

all:		$(NAME)

$(NAME):	$(HEAD)
	$(MAKELIB)
	$(CC) $(CFLAGS) $(LFLAGS) $(SRC) -o $@

clean:
	$(MAKELIB) fclean

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re