NAME = libft.a
SOURCES = \
ft_atoi.c \
ft_isalpha.c \
ft_isalnum.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_strncmp.c \
ft_strnstr.c \
ft_memset.c \
ft_bzero.c \
ft_memmove.c \
ft_memcpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strmapi.c \
ft_striteri.c \
ft_split.c \
ft_itoa.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc
AR = ar

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?


%.o: %.c 
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
