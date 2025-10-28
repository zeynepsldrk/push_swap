SRCS	= main.c error_check.c ft_split.c push_functions.c reverse_rotate_func.c rotate_functions.c swap_functions.c utils.c sorting.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap.a
CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:		$(NAME)
$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
clean:		
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:		fclean all

.PHONY:		all clean fclean re