/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_chunks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:18:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 11:10:25 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	split_into_chunks(t_stack *stack, int chunk_divisor)
{
	int		len;
	int		chunk_size;
	int		third_biggest;
	t_node	*curr;

	while (get_stack_size(stack->a) > 3 && !is_sorted(stack))
	{
		len = get_stack_size(stack->a);
		chunk_size = len / chunk_divisor;
		third_biggest = len - 3;
		while (len > 0)
		{
			curr = stack->a;
			if (curr->index < third_biggest && curr->index <= chunk_size * 2)
			{
				pb(stack);
				if (curr->index < chunk_size && get_stack_size(stack->b) > 1)
					rb(stack);
			}
			else
				ra(stack);
			len--;
		}
		recalculate_index(stack->a, get_stack_size(stack->a));
	}
}

void	recalculate_indexes_after_chunk_split(t_stack *stack)
{
	t_node	*curr;
	int		stack_b_len;
	int		i;

	i = 0;
	stack_b_len = get_stack_size(stack->b);
	recalculate_index(stack->b, stack_b_len);
	curr = stack->a;
	while (curr)
	{
		curr->index = i + stack_b_len;
		curr = curr->next;
		i++;
	}
}
