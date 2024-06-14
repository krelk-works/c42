# Name of the library
NAME = libft.a

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

# Source files
SRC = $(wildcard $(SRCDIR)/*.c)

# Object files
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCDIR) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
