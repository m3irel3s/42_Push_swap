/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   220_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:15:40 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/29 17:35:12 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push(t_node **stack_x, t_node **stack_y)
{
	t_node *head_x = (*stack_x);
	t_node *head_y = (*stack_y);
	t_node *temp_x;
	t_node *temp_y;

	temp_x = head_x;
	temp_y = head_y;
	head_x = head_x->next;
	if (!head_y)
	{
		head_y = temp_x;
		head_y->next = NULL;
	}
	else
	{
		temp_x->next = temp_y;
		temp_y->prev = temp_x;
		head_y = temp_x;
	}
	(*stack_x) = head_x;
	(*stack_y) = head_y;
}

// t_node	*push(t_stack *stack)
// {
// 	t_node	*stack_a;
// 	t_node	*stack_b;

// 	stack_a = stack->a;
// 	stack_b = stack->b;

// }