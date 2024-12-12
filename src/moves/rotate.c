/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:45:59 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/12 15:15:51 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void rotate(t_node **stack)
{
	t_node *head;
	t_node *tail;
	t_node *temp_head;

	if (!stack || !(*stack) || !(*stack)->next)
		return;
	head = *stack;
	tail = get_last_node(head);
	temp_head = head;
	*stack = head->next;
	(*stack)->prev = NULL;
	tail->next = temp_head;
	temp_head->prev = tail;
	temp_head->next = NULL;
}

void	ra(t_stack *stack)
{
	rotate(&stack->a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	rotate(&stack->b);
	write(1, "rb\n", 3);
}

