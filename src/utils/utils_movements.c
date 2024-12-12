/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:07:09 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/12 15:07:55 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_node	*get_last_node(t_node *head)
{
	t_node	*last_node;

	if (!head)
		ft_print_error("No head found!");
	last_node = head;
	while (last_node->next)
		last_node = last_node->next;
	return last_node;
}

int	get_node_position(t_node *stack, t_node *node)
{
	int	position;
	t_node	*curr;

	position = 0;
	curr = stack;
	while (curr)
	{
		if (curr == node)
			return position;
		curr = curr->next;
		position++;
	}
	return -1;
}

t_node	*set_target_position(t_stack *stack, t_node *b_node)
{
	t_node	*a_node;
	
	a_node = stack->a;
	while (a_node && a_node->index < b_node->index)
		a_node = a_node->next;
	return a_node;
}

t_node	*find_lowest_total_cost(t_stack *stack)
{
	t_node	*b_curr;
	t_node	*lowest;

	b_curr = stack->b;
	lowest = b_curr;
	while (b_curr)
	{
		if(b_curr->total_cost < lowest->total_cost)
			lowest = b_curr;
		b_curr = b_curr->next;
	}
	return (lowest);
}



