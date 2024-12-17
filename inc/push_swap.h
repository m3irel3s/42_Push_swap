/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:35:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 13:06:07 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42_Libft/FT_Libft/inc/libft.h"
# include "../42_Libft/FT_Printf/inc/ft_printf.h"
# include "../42_Libft/Get_next_line/inc/get_next_line.h"

//===============================================================//
//                          STRUCTURES                           //
//===============================================================//

typedef struct s_flags
{
	int	split_flag;
}	t_flags;

typedef struct s_node
{
	int				num;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
	int		total_len;
}	t_stack;

//===============================================================//
//                       PARSING FUNCTIONS                       //
//===============================================================//

void	init_stack(char **argv, t_stack *stack, t_flags *flag);
char	**check_arguments(int argc, char **argv, t_flags *flag, t_stack *stack);
void	validate_and_build_stack(char **argv, t_node **stack,
			t_stack *stacks, t_flags *flag);
long	validate_and_convert(char *str, char **argv, t_stack *stacks,
			t_flags *flag);
void	check_for_duplicates(int num, t_stack *stack,
			t_flags *flag, char **argv);
void	append_to_stack(t_node **stack, int num);
char	**check_valid_number(char **argv, t_flags *flag, t_stack *stack);
void	give_index(char **argv, t_node **stack, t_stack *stacks);
int		*init_tab_and_convert(char **argv, int *tab, int len);
int		*sort_tab(int *tab, int len);

//===============================================================//
//                       MOVEMENTS FUNCTIONS                     //
//===============================================================//

void	push(t_node **stack_x, t_node **stack_y);
void	pa(t_stack *stack);
void	pb(t_stack *stack);

void	swap(t_node **stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);

void	rev_rotate(t_node **stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	rotate(t_node **stack);
void	rb(t_stack *stack);
void	ra(t_stack *stack);
void	rr(t_stack *stack);

//===============================================================//
//                         SORT FUNCTIONS                        //
//===============================================================//

void	sort_algorithm(t_stack *stack, int chunk_divisor);
void	split_into_chunks(t_stack *stack, int chunk_divisor);
void	sort_three(t_stack *stack);
void	get_highest_and_push_to_a(t_node *highest, int position,
			int size, t_stack *stack);

//===============================================================//
//                        UTILS FUNCTIONS                        //
//===============================================================//

t_node	*get_last_node(t_node *head);
int		get_stack_size(t_node *stack);
t_node	*create_new_node(int num);
int		is_sorted(t_stack *stack);
t_node	*get_highest_value(t_node *stack);
void	recalculate_index(t_node *node, int len);
void	give_index_after_recalculation(t_node *node, int len, int *tab);
void	recalculate_indexes_after_chunk_split(t_stack *stack);
int		get_node_position(t_node *stack, t_node *node);
void	free_nodes(t_stack *stack);
void	free_split(char **argv);

//===============================================================//
//                         ERROR FUNCTIONS                       //
//===============================================================//

char	*ft_print_error(char **argv, char *str, t_flags *flag, t_stack *stack);

#endif