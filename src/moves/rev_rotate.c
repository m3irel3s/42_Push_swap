/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:57:25 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/12 15:15:51 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rev_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;
	t_node	*temp_head;

	head = *stack;
	tail = get_last_node(head);
	temp_head = head;
	tail->prev->next = NULL;
	head = tail;
	head->next = temp_head;
	head->prev = NULL;
	*stack = head;
}

void	rra(t_stack *stack)
{
	rev_rotate(&stack->a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack)
{
	rev_rotate(&stack->b);
	write(1, "rrb\n", 4);
}