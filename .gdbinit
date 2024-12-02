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

define append_to_stack
	disp *new_node
	disp *last
end

define push
	disp *head_a
	disp *head_b
	disp *temp_a
	disp *temp_b
end

# brea kat main
fs cmd
file push_swap
break main
break rotate
run +32 10 -12 -32 +12 -84821412 -432 143 134 > /dev/null

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