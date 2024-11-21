NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I. -I$(INC_DIR)

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc
LIBFT_DIR = 42_Libft
LIBFT    = $(LIBFT_DIR)/libft.a

SRC = push_swap.c $(SRC_DIR)/push_swap_utils.c
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:%.c=%.o)))

all: $(LIBFT) $(NAME)

$(LIBFT_DIR):
	git clone git@github.com:m3irel3s/42_Libft.git $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(LIBFT): $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@	

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -rf $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
