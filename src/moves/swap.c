/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:55:44 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 14:01:57 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_node **stack)
{
	t_node *first;
	t_node *second;

	if (!*stack || !(*stack)->next)
		return ;
	second = *stack;	
	first = (*stack)->next;
	first->prev = NULL;
	second->next = first->next;
	if (second->next)
		second->next->prev = second;
	second->prev = first;
	first->next = second;
	*stack = first;
}

void	sa(t_stack *stack)
{
	swap(&stack->a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	swap(&stack->b);
	write(1, "sb\n", 3);
}
