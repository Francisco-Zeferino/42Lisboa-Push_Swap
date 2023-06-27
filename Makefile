SourceFiles = aux_funcs.c best_friend_calcs.c big_sort.c list_utils.c \
move_funcs.c node_utils.c push_actions.c push_swap.c reverse_rotation_actions.c \
rotate_actions.c sorting.c swap_actions.c utils.c

Objects = $(SourceFiles:.c=.o)
NAME = pushswap
CC = cc
LIB = ar rcs
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
all: $(NAME)

$(NAME): $(Objects)
	$(LIB) $(NAME) $(Objects)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(Objects)

fclean : clean
	$(RM) $(NAME)

re : fclean all
