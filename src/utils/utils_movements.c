/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:07:09 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/11 12:43:57 by jmeirele         ###   ########.fr       */
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



