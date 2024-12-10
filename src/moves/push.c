/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:15:40 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 13:19:57 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_node **stack_x, t_node **stack_y)
{
	t_node *head_x = *stack_x;
	t_node *head_y = *stack_y;
	t_node *temp_x;
	t_node *temp_y;

	if (!*stack_x)
		return ;
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
	*stack_x = head_x;
	*stack_y = head_y;
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