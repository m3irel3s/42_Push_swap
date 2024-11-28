#GDB Settings
set print pretty on
set print array on

# push_swap.c
define main
	disp *argv@argc
	disp argv
	disp argc
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

define swap
	disp *first
	disp *second
	disp *second->next
end

define append_to_stack
	disp *new_node
	disp *last
end

# brea kat main
fs cmd
break main
break swap
run +32 10 -12 -32 +12 -84821412 -432 143 134 > /dev/null

# fs cmd
# run +32 10 -12 -32 +12 -84821412 -432 143 134

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# fs cmd
# run "+32 10 -12 -32 +12 -84821412 -432 143 134"

### Info Stats
# file push_swap
# set logging on
# set trace-commands on

# info break
# info watch