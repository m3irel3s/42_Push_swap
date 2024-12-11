/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:53:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/11 14:07:29 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_algorithm(t_stack *stack)
{
	split_into_chunks(stack);
	recalculate_indexes_after_chunk_split(stack);
	if (!is_sorted(stack))
		sort_three(stack);
}

void	recalculate_indexes_after_chunk_split(t_stack *stack)
{
	t_node *curr;
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