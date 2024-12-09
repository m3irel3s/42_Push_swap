#GDB Settings
set print pretty on
set print array on

set style enabled on
# set style highlight foreground red
# set style string foreground yellow
# set style comment foreground green
# set style function foreground magenta


### Info Stats
set logging on
# set trace-commands on

# push_swap.c
define main
	# disp *argv@argc
	disp *temp_b
	disp temp_b
	
end

define init_stack
	disp argv
	disp *argv
end

define check_arguments
	disp argc
	disp argv
end

define check_valid_number
	disp arr
	disp j
	disp *arr[j]
	disp arr[j]
end

define rotate
	disp *head
	disp *temp_head
	disp *tail
end

define swap
	disp *first
	disp *second
	disp *second->next
end

define push
	disp *head_a
	disp *head_b
	disp *temp_a
	disp *temp_b
end

define append_to_stack
	disp *new_node
	disp *last
end

define give_index
	disp argv[i]
	disp argv[i + 1]
	disp sorted
	disp tab[i]
	disp tab[i + 1]
end

define test_sort
	disp chunk_size
	disp chunk_size * 2
	disp curr->index
	disp curr->num
	disp *stack->a
end

define is_sorted
	disp curr->index
	disp curr->next->index
end

# brea kat main
fs cmd
file push_swap
break main
break is_sorted
run 1 2 3 4 5 6 7 8

# fs cmd
# run +32 10 -12 -32 +12 -84821412 -432 143 134

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"



info break
info watch