#GDB Settings
set print pretty on
set print array on

# push_swap.c
define main
	disp *a
	disp *b
	disp data
	disp argv
	disp argc
end

define check_args
	disp arr
	disp i
end

define check_valid_number
	disp i
	disp j
	disp arr
	disp arr[i]
	disp arr[i][j]
end

define check_duplicates
	disp res[i]
	disp res[j]
	disp arr[i]
	disp i
	disp j
end

define convert_into_integer
	disp res
	disp i
	disp arr[i]
	disp res[i]
end

fs cmd
run +32 10 -12 -32 +12 +23328143284821412 -432 143 134
break main
break check_args
break check_valid_number
break convert_into_integer
break check_duplicates

