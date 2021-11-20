NAME = libftprintf.a

SRCS =	printf.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putnbr.c \
		libft/ft_putunsnbr.c \
		libft/ft_putunsnbr_base.c \
		libft/ft_prsprint.c \
		libft/ft_strlen.c \
		libft/ft_hexpoint.c \
		libft/ft_putlngnbr_base.c \
		libft/check_base.c
		

OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

COUNTER=1

.c.o:
		@echo "\033[1;36mCompiled $(COUNTER) of 11 files\033[0m"
		@${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}
		$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
$(NAME): ${OBJS}
		@echo "\033[1;35mBuilding library...\033[0m"
		@ar rcs ${NAME} ${OBJS}
		@echo "\033[1;32mDONE!\033[0m"

clean:  
		@echo "\033[1;32mSome junk removed!\033[0m"
		@${RM} ${OBJS}

fclean:	
		@echo "\033[1;32mAll the junk removed!\033[0m"
		@${RM} ${OBJS}
		@${RM} ${NAME}

all: ${NAME} ${OBJS}

re:		fclean all
