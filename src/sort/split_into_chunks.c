/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_chunks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:18:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 17:08:06 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	split_into_chunks(t_stack *stack)
{
	int len;
	int chunk_size;
	int third_biggest;
	t_node *curr;
	
	while (count_stack_size(stack->a) > 3)
	{
		len = count_stack_size(stack->a);
		chunk_size = len / 3;
		third_biggest = len - 3;
		while (len > 0)
		{
			curr = stack->a;
			if (curr->index < third_biggest && curr->index <= chunk_size * 2)
			{
				pb(stack);
				if (curr->index < chunk_size)
					rb(stack);
			}
			else
				ra(stack);
			len--;
		}
		recalculate_index(stack, count_stack_size(stack->a));
	}
}

