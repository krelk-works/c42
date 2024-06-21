# Nombre del programa
NAME = libft.a

# Archivos fuente
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Flags de compilación
CFLAGS = -Wall -Werror -Wextra

# Comando de compilación
CC = gcc

# Regla por defecto
all: $(NAME)

# Regla para crear la librería estática
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	gcc -o test_program main.c -L. -lft

# Regla para compilar archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar archivos objeto
clean:
	rm -f $(OBJS)

# Limpiar todo
fclean: clean
	rm -f $(NAME)

# Reconstruir todo
re: fclean all
