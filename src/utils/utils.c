/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:46:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 11:10:23 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	get_stack_size(t_node *stack)
{
	int		i;
	t_node	*curr;

	i = 0;
	curr = stack;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

t_node	*get_highest_value(t_node *stack)
{
	t_node	*curr;
	t_node	*highest;

	if (!stack)
		return (NULL);
	curr = stack;
	highest = curr;
	while (curr)
	{
		if (curr->index > highest->index)
			highest = curr;
		curr = curr->next;
	}
	return (highest);
}

int	is_sorted(t_stack *stack)
{
	t_node	*curr;

	curr = stack->a;
	while (curr && curr->next)
	{
		if (curr->index > curr->next->index)
			return (0);
		curr = curr->next;
	}
	return (1);
}

void	recalculate_index(t_node *node, int len)
{
	t_node	*curr;
	int		*tab;
	int		i;

	tab = malloc(sizeof(int) * len);
	if (!tab)
		return ;
	curr = node;
	i = 0;
	while (curr)
	{
		tab[i] = curr->num;
		i++;
		curr = curr->next;
	}
	sort_tab(tab, len);
	give_index_after_recalculation(node, len, tab);
	free(tab);
}

void	give_index_after_recalculation(t_node *node, int len, int *tab)
{
	t_node	*curr;
	int		i;

	curr = node;
	while (curr)
	{
		i = 0;
		while (i < len)
		{
			if (curr->num == tab[i])
			{
				curr->index = i;
				break ;
			}
			i++;
		}
		curr = curr->next;
	}
}
