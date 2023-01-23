LIB = ar rcs
RM = rm -f

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = src/ft_atoi.c src/ft_bzero.c src/ft_calloc.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c\
src/ft_memchr.c src/ft_memcmp.c src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c src/ft_strchr.c src/ft_strdup.c src/ft_strlcat.c\
src/ft_strlcpy.c src/ft_strlen.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strrchr.c src/ft_tolower.c src/ft_toupper.c src/ft_strjoin.c\
src/ft_strtrim.c src/ft_substr.c src/ft_striteri.c src/ft_putchar_fd.c src/ft_split.c src/ft_strmapi.c src/ft_putstr_fd.c src/ft_putnbr_fd.c\
src/ft_putendl_fd.c src/ft_itoa.c\

#BONUSSRC = src/ft_lstnew_bonus.c src/ft_lstadd_front_bonus.c src/ft_lstlast_bonus.c src/ft_lstsize_bonus.c\
src/ft_lstadd_back_bonus.c src/ft_lstdelone_bonus.c src/ft_lstclear_bonus.c src/ft_lstiter_bonus.c

BONUSSRC = src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstlast.c src/ft_lstsize.c src/ft_lstadd_back.c src/ft_lstdelone.c src/ft_lstclear.c src/ft_lstiter.c

OBJ = $(SRC:.c=.o)
INCLUDE = inc/libft.h

BONUSOBJ = $(BONUSSRC:.c=.o)

#funciones o comandos (?)
all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#rebonus: fclean bonus

.PHONY: bonus all clean fclean re
