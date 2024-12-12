/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_move_costs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:08 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/12 15:17:32 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	calculate_costs(t_stack *stack, t_node *b_node)
{
	t_node *target_position = set_target_position(stack, b_node);
	b_node->cost_b = ft_min(calculate_rotate_cost(stack->b, b_node), calculate_rev_rotate_cost(stack->b, b_node));
	b_node->cost_a = ft_min(calculate_rotate_cost(stack->a, target_position), calculate_rev_rotate_cost(stack->a, target_position));
	if (b_node->cost_b == calculate_rotate_cost(stack->b, b_node))
    b_node->direction_b = (b_node->cost_b == 0) ? 0 : 1;
	else
	    b_node->direction_b = (b_node->cost_b == 0) ? 0 : -1;
	
	if (b_node->cost_a == calculate_rotate_cost(stack->a, target_position))
	    b_node->direction_a = (b_node->cost_a == 0) ? 0 : 1;
	else
	    b_node->direction_a = (b_node->cost_a == 0) ? 0 : -1;
	
	b_node->total_cost = b_node->cost_a + b_node->cost_b;
}

int	calculate_rotate_cost(t_node *stack, t_node *node)
{
	int position;

	position = get_node_position(stack, node);
	if (position == -1)
		return -1;
	return position;
}

int	calculate_rev_rotate_cost(t_node *stack, t_node *node)
{
	int	position;
	int	stack_size;

	position = get_node_position(stack, node);
	stack_size = get_stack_size(stack);
	if (position == -1)
		return -1;
	return stack_size - position;
}


