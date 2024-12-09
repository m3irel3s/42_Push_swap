/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:48:05 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/09 17:30:40 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


void test_sort(t_stack *stack)
{
	int	len;
	int	chunk_size;
	t_node *curr;
	len = count_stack_size(stack->a);
	chunk_size = len / 3;
	while (len > 0)
	{
		curr = stack->a;
		if (curr->index >= chunk_size && curr->index <= (chunk_size * 2))
		{
			pb(stack);
		}
		else if (curr->index < chunk_size)
		{
			pb(stack);
			rb(stack);
		}
		else if (curr->index > chunk_size * 2)
		{
			ra(stack);
		}
		len--;
	}
	recalculate_index(stack);
}





void	print_stacks(t_stack *stack)
{
	t_node *curr;
	curr = stack->b;

	while (curr)
	{
		printf("[%d] => num: %d\n", curr->index, curr->num);
		curr = curr->next;
	}
}



// while (len > 0)
	// {
	// 	curr = *stack_a;
	// 	if (curr->index >= chunk_size && curr->index <= chunk_size_twice)
	// 	{
	// 		pb(stack_a, stack_b);
	// 	}
	// 	else if (curr->index < chunk_size)
	// 	{
	// 		pb(stack_a, stack_b);
	// 		rotate(stack_b);
	// 		write(1, "rb\n",3);
	// 	}
	// 	if (curr->index > chunk_size_twice)
	// 	{
	// 		rotate(stack_a);
	// 		write(1, "ra\n",3);
	// 	}
	// 	len--;
	// }