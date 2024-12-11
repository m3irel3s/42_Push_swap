/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_move_costs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:45:08 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/11 13:53:44 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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
