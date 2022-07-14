NAME		= libftprintf.a

HEADER		= ft_printf.h

SRCS		= ft_printf.c \
		  		ft_print_p.c \
		  		ft_print_funcoes.c \
		  		ft_print_di.c \
		  		ft_print_u.c \
		  		ft_print_hexa.c 

OBJS		= $(SRCS:.c=.o)

CC			= cc

RM			= rm -f

CFLGAS		= -Wall -Werror -Wextra

.c.0:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(HEADER) $(OBJS)
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:	
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
