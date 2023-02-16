NAME = libftprintf.a

SRCS = 	ft_c.c			\
	ft_s.c			\
	ft_p.c			\
	ft_d.c			\
	ft_i.c			\
	ft_u.c			\
	ft_x.c			\
	ft_xmaj.c		\
	ft_hexadecimal.c	\
	ft_hexadecimalmaj.c	\
	ft_printf.c		\

CC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar crs

RM = rm -f

LIBFT = libft
OBJS = ${SRCS:.c=.o}

.c.o:
				${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				make -C ${LIBFT}
				cp ./libft/libft.a ${NAME}
				${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
				${RM} ${OBJS}
				make fclean -C ${LIBFT}
fclean:		clean
				${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
