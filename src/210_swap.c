/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   210_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:55:44 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 16:27:38 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*swap(t_node **stack)
{
	t_node *first;
	t_node *second;

	if (!*stack || !(*stack)->next)
		return (*stack);
	second = *stack;	
	first = (*stack)->next;
	first->prev = NULL;
	second->next = first->next;
	if (second->next)
		second->next->prev = second;
	second->prev = first;
	first->next = second;
	*stack = first;
	return (*stack);
}

void	sa(t_stack **stacks)
{
	swap(&(*stacks)->a);
}

void	sb(t_stack **stacks)
{
	swap(&(*stacks)->b);
}
