/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:35:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/11 13:53:42 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42_Libft/FT_Libft/inc/libft.h"
# include "../42_Libft/FT_Printf/inc/ft_printf.h"
# include "../42_Libft/Get_next_line/inc/get_next_line.h"

//=============================================================================//
//                               STRUCTURES                                    //
//=============================================================================//
// /home/jmeirele/Desktop/Workspace/CommonCore/rank02/42_Push_swap/./push_swap
typedef struct s_node
{
	int	num;
	int index;
	int cost_a;
	int cost_b;
	int total_cost;

	struct s_node *prev;
	struct s_node *next;
}	t_node;

typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
}	t_stack;


//=============================================================================//
//                            PARSING FUNCTIONS                                //
//=============================================================================//

void	init_stack(char **argv, t_stack *stack);
char	**check_arguments(int argc, char **argv);
void	validate_and_bluid_stack(char **argv, t_node **stack);
long	validate_and_convert(char *argv);
void	check_for_duplicates(t_node *a, int num);
void	append_to_stack(t_node **stack, int num);
char	**check_valid_number(char **argv);
void	give_index(char **argv, t_node **stack);
int		*init_tab_and_convert(char **argv, int *tab, int len);
int		*sort_tab(int *tab, int len);

//=============================================================================//
//                            MOVEMENTS FUNCTIONS                              //
//=============================================================================//

void	push(t_node **stack_x, t_node **stack_y);
void	pa(t_stack *stack);
void	pb(t_stack *stack);

void	swap(t_node **stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);

void	rev_rotate(t_node **stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);

void	rotate(t_node **stack);
void	rb(t_stack *stack);
void	ra(t_stack *stack);



//=============================================================================//
//                               SORT FUNCTIONS                                //
//=============================================================================//

void	sort_algorithm(t_stack *stack);
void	split_into_chunks(t_stack *stack);
void	sort_three(t_stack *stack);


//=============================================================================//
//                               COST FUNCTIONS                                //
//=============================================================================//

int		calculate_rotate_cost(t_node *stack, t_node *node);
int		calculate_rev_rotate_cost(t_node *stack, t_node *node);

//=============================================================================//
//                              UTILS FUNCTIONS                                //
//=============================================================================//

t_node	*get_last_node(t_node *head);
int		get_stack_size(t_node *stack);
t_node	*create_new_node(int num);
int		is_sorted(t_stack *stack);
t_node	*get_highest_value(t_stack *stack);
void	recalculate_index(t_node *stack, int len);
void	recalculate_indexes_after_chunk_split(t_stack *stack);
int		get_node_position(t_node *stack, t_node *node);


//=============================================================================//
//                              ERROR FUNCTIONS                                //
//=============================================================================//

char	*ft_print_error(char *str);

#endif