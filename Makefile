NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g -I. -I$(INC_DIR)

SRC_DIR = src
INC_DIR = inc
LIBFT_DIR = 42_Libft
LIBFT = $(LIBFT_DIR)/libft.a

FILES	= 000_main.c
FILES	+= 110_parsing.c
FILES	+= 120_valid_and_init.c
FILES	+= 210_swap.c
FILES	+= 810_utils_movements.c
FILES	+= 999_error.c

SRC = $(addprefix $(SRC_DIR)/, $(FILES))

ARGV_INT = +32 10 -12 -32 +12 -84821412 -432 143 134 
ARGV_STR = "+32 10 -12 -32 +12 -84821412 -432 143 134"

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

gdb: $(NAME) $(SRC)
	gdb ./$(NAME) -tui

# gdb: all $(NAME) ## Debug w/ gdb
# 	tmux split-window -h "gdb --tui --args --log-file=gdb.txt ./$(NAME)"
# 	tmux resize-pane -L 5
# 	make get_log

# get_log:
# 	touch gdb.txt
# 	@if command -v lnav; then \
# 		lnav gdb.txt; \
# 	else \
# 		tail -f gdb.txt; \
# 	fi

test_str: $(NAME) $(SRC)
	./$(NAME) $(ARGV_STR)

test_int: $(NAME) $(SRC)
	./$(NAME) $(ARGV_INT)

fclean: clean
	rm -f $(NAME)
	rm -rf $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
