/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   820_utils_nodes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:46:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/29 17:35:17 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	count_stack_size(t_node *stack_a)
{
	int i = 0;
	while (stack_a)
	{
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

t_node	*create_new_node(int num)
{
	t_node	*node;
	node = malloc(sizeof(t_node));
	if (!node)
		ft_print_error("Error adding memory to new_node");
	node->num = num;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
