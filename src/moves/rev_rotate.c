/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:57:25 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/13 16:17:40 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rev_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;
	t_node	*temp_head;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	head = *stack;
	tail = get_last_node(head);
	temp_head = head;
	tail->prev->next = NULL;
	*stack = tail;
	tail->prev = NULL;
	tail->next = temp_head;
	temp_head->prev = tail;
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

void	rrr(t_stack *stack)
{
	rev_rotate(&stack->a);
	rev_rotate(&stack->b);
	write(1, "rrr\n", 4);
}
