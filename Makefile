NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g -I. -I$(INC_DIR)

SRC_DIR = src
INC_DIR = inc
LIBFT_DIR = 42_Libft
LIBFT = $(LIBFT_DIR)/libft.a
MOVES_DIR = $(SRC_DIR)/moves
PARSING_DIR = $(SRC_DIR)/parsing
UTILS_DIR = $(SRC_DIR)/utils
SORT_DIR = $(SRC_DIR)/sort
COSTS_DIR = $(SRC_DIR)/costs

SRC = $(SRC_DIR)/main.c \
	$(PARSING_DIR)/parsing.c \
	$(PARSING_DIR)/valid_and_init.c \
	$(PARSING_DIR)/give_index.c \
	$(MOVES_DIR)/swap.c \
	$(MOVES_DIR)/push.c \
	$(MOVES_DIR)/rotate.c \
	$(MOVES_DIR)/rev_rotate.c \
	$(UTILS_DIR)/utils_movements.c \
	$(UTILS_DIR)/utils.c \
	$(SRC_DIR)/error.c \
	$(SORT_DIR)/sort.c \
	$(SORT_DIR)/split_into_chunks.c \
	$(SORT_DIR)/small_sorts.c \
	$(COSTS_DIR)/calculate_move_costs.c


# ARGV_INT = 320 165 136 319 180 304 264 362 65 375 223 63 280 83 184 328 205 8 37 195 394 204 371 288 2 72 255 364 67 216 109 38 229 311 24 91 17 335 354 25 267 312 197 274 104 382 126 252 10 170 268 358 396 265 301 295 110 378 122 355 227 338 13 284 54 277 30 73 96 259 147 169 189 42 324 158 341 218 4 292 113 307 23 302 299 186 313 393 70 370 398 173 12 87 279 287 22 123 100 130 90 199 270 36 177 28 386 213 276 148 185 98 58 379 347 233 310 305 351 360 106 321 62 212 115 78 293 389 179 356 203 94 241 64 383 48 392 77 395 207 129 297 80 260 79 303 346 103 377 282 132 86 217 92 44 339 171 244 167 124 226 329 85 182 20 153 75 74 108 334 237 372 198 251 201 200 47 168 40 337 322 18 330 127 35 278 50 156 140 283 266 84 15 71 275 385 314 120 391 340 326 352 41 245 273 149 166 381 59 145 135 262 137 271 181 174 239 373 332 349 61 214 343 193 95 188 152 388 5 155 76 53 234 290 68 154 117 128 6 308 236 66 150 34 345 29 306 49 230 119 172 323 33 390 105 141 210 249 60 102 291 387 309 333 206 281 231 88 164 353 116 238 357 257 131 1 194 81 380 250 359 296 138 143 160 202 196 157 118 243 209 254 366 327 134 286 316 112 101 93 55 69 144 43 27 176 191 294 52 325 240 256 39 247 175 183 219 19 9 344 142 192 121 221 374 178 350 162 31 46 258 336 211 384 187 14 56 45 99 7 298 315 222 215 361 51 331 367 242 159 263 151 365 11 26 16 400 3 235 89 246 225 269 399 125 139 114 285 368 272 111 397 342 97 163 317 57 376 253 300 228 220 224 21 82 208 190 318 348 232 133 161 146 363 107 289 261 369 248 32 
# ARGV_INT = 2 1 0
ARGV_INT = 10 15 2 9 6 3 4
# ARGV_INT = 100   14   19   28   54   23   43   79   33   80   49   20   89   17   6   64   3   13   98   84   27   78   39   63   60   10   83   25   16   38   40   50   8   21   62   55   4   88   87   12   75   9   46   86   94   45   18   65   52   32   36   53   95   7   67   34   82   11   47   42   74   92   71   48   2   91   70   59   41   1   69   77   5   44   29   85   68   37   31   26   99   72   93   58   97   35   61   24   81   90   76   22
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

# gdb: $(NAME) $(SRC)
# 	gdb ./$(NAME) -tui

gdb: all $(NAME) ## Debug w/ gdb
	tmux split-window -h "gdb --tui --args --log-file=gdb.txt ./$(NAME)"
	tmux resize-pane -L 5
	make get_log

get_log:
	rm -f gdb.txt
	touch gdb.txt
	@if command -v lnav; then \
		lnav gdb.txt; \
	else \
		tail -f gdb.txt; \
	fi

test_str: $(NAME) $(SRC)
	./$(NAME) $(ARGV_STR)

test_int: $(NAME) $(SRC)
	./$(NAME) $(ARGV_INT)

fclean: clean
	rm -f $(NAME)
	rm -rf $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
