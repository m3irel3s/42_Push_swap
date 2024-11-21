NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g -I. -I$(INC_DIR)

SRC_DIR = src
INC_DIR = inc
LIBFT_DIR = 42_Libft
LIBFT    = $(LIBFT_DIR)/libft.a

SRC = push_swap.c $(SRC_DIR)/push_swap_utils.c

all: $(LIBFT) $(NAME)

$(LIBFT_DIR):
	git clone git@github.com:m3irel3s/42_Libft.git $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(LIBFT): $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIBFT)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)
	rm -rf $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
