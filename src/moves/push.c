/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:15:40 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/13 16:16:28 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_node **stack_x, t_node **stack_y)
{
	t_node	*temp;

	if (!*stack_x)
		return ;
	temp = *stack_x;
	*stack_x = temp->next;
	if (*stack_x)
		(*stack_x)->prev = NULL;
	temp->next = *stack_y;
	if (*stack_y)
		(*stack_y)->prev = temp;
	*stack_y = temp;
}

void	pb(t_stack *stack)
{
	push(&stack->a, &stack->b);
	write(1, "pb\n", 3);
}

void	pa(t_stack *stack)
{
	push(&stack->b, &stack->a);
	write(1, "pa\n", 3);
}
