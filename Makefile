CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_print_ptr.c ft_putchar.c ft_puthexa.c ft_putnbr_unsigned.c ft_putnbr.c \
		ft_putstr.c
OBJCT = ${SRCS:.c=.o}
RM = rm -rf
NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OBJCT}
	ar -rc ${NAME} ${OBJCT}

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean :
	${RM} ${OBJCT}

fclean : clean
	${RM} ${NAME}

re : fclean all