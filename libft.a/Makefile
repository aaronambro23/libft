NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
CC = gcc
RM = rm -rf

SRC_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_strdup.c ft_strmapi.c ft_striteri.c \
ft_putnbr_fd.c ft_strjoin.c ft_substr.c

BONUS_FILES = ft_lstsize_bonus.c ft_lstnew_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstadd_front_bonus.c ft_lstmap_bonus.c

OBJ_FILES = $(SRC_FILES:.c=.o)
BONUS_OBJ_FILES = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar $(ARFLAGS) $(NAME) $(OBJ_FILES)

clean: 
	$(RM) $(OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ_FILES) $(BONUS_OBJ_FILES)
	ar $(ARFLAGS) $(NAME) $(OBJ_FILES) $(BONUS_OBJ_FILES)

.PHONY: all clean fclean re bonus