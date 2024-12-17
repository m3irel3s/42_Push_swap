/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:07:09 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 12:34:42 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_node	*create_new_node(int num)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_node	*get_last_node(t_node *head)
{
	t_node	*last_node;

	if (!head)
		NULL;
	if (head->next == NULL)
		return (head);
	last_node = head;
	while (last_node->next)
		last_node = last_node->next;
	return (last_node);
}

int	get_node_position(t_node *stack, t_node *node)
{
	int		position;
	t_node	*curr;

	position = 0;
	curr = stack;
	while (curr)
	{
		if (curr == node)
			return (position);
		curr = curr->next;
		position++;
	}
	return (-1);
}
