/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:18:05 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 11:10:20 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack *stack)
{
	t_node	*head;
	t_node	*highest;

	head = stack->a;
	highest = get_highest_value(head);
	if (head == highest)
		ra(stack);
	else if (head->next == highest)
		rra(stack);
	head = stack->a;
	if (head->num > head->next->num)
		sa(stack);
}
