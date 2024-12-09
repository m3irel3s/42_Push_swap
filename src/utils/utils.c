/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:46:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/09 17:27:52 by jmeirele         ###   ########.fr       */
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

int	is_sorted(t_stack *stack)
{
	t_node *curr;

	curr = stack->a;
	while (curr->index)
	{
		if (curr->index > curr->next->index)
			return 0;
		curr = curr->next;
	}
	return 1;
}

void	recalculate_index(t_stack *stack)
{
	int	len = count_stack_size(stack->a);
	printf("len[%d]\n", len);
	int	*tab;
	tab = malloc(sizeof(int) * len);
	int i = 0;
	while (stack->a)
	{
		tab[i] = stack->a->num;
		i++;
		stack->a = stack->a->next;
	}
	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}


