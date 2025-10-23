SRCS	= main.c

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