/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:46:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 15:44:21 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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

t_node	*get_highest_value(t_stack *stack)
{
	t_node	*curr;
	t_node	*highest;

	curr = stack->a;
	highest = curr;
	while (curr)
	{
		if (curr->num > highest->num)
			highest = curr;
		curr = curr->next;
	}
	return highest;
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
	while (curr->num)
	{
		if (curr->num > curr->next->num)
			return 0;
		curr = curr->next;
	}
	return 1;
}

void	recalculate_index(t_stack *stack, int len)
{
	int	*tab;
	tab = malloc(sizeof(int) * len);
	int i = 0;
	t_node	*curr;
	curr = stack->a;
	int j;
	while (curr)
	{
		tab[i] = curr->num;
		i++;
		curr = curr->next;
	}
	sort_tab(tab, len);
	curr = stack->a;
	i = 0;
	while (curr)
	{
		j = 0;
		while (j < len)
		{
			if (curr->num == tab[j])
			{
				curr->index = j;
				break;
			}
			j++;
		}
		curr = curr->next;
	}
	free(tab);
}


