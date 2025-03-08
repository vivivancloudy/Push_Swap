NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC_DIR = src
INCLUDE_DIR = include
LIBFT_DIR = libft


SRCS = $(SRC_DIR)/main.c \
        $(SRC_DIR)/p.c \
        $(SRC_DIR)/r.c \
        $(SRC_DIR)/rr.c \
        $(SRC_DIR)/s.c \
        $(SRC_DIR)/sort_cases.c \
        $(SRC_DIR)/sorting.c \
        $(SRC_DIR)/support_functions.c

OBJS = $(SRCS:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a

HEADER = $(INCLUDE_DIR)/pushswap.h

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIBFT_DIR) -lft

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
