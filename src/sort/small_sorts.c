/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:18:05 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 15:02:01 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void sort_three(t_stack *stack)
{
	t_node	*head;

	t_node *highest;
	head = stack->a;
	highest = get_highest_value(stack);
	// 2 0 1 || 2 1 0
	if (head == highest)
		ra(stack);
	// 0 2 1 || 1 2 0
	else if (head->next == highest)
		rra(stack);
	// 0 1 2 || 1 0 2
	head = stack->a;
	if (head->num > head->next->num)
		sa(stack);
}

// void	sort_five(t_stack *stack)
// {
	
// }