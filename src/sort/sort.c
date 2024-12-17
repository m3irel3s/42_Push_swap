/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:53:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 11:17:03 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_algorithm(t_stack *stack, int chunk_divisor)
{
	t_node	*highest;
	int		position;
	int		size;

	highest = NULL;
	position = 0;
	size = 0;
	split_into_chunks(stack, chunk_divisor);
	if (!is_sorted(stack))
		sort_three(stack);
	recalculate_indexes_after_chunk_split(stack);
	while (stack->b)
	{
		if (stack->b->next == NULL)
		{
			pa(stack);
			break ;
		}
		get_highest_and_push_to_a(highest, position, size, stack);
	}
}

void	get_highest_and_push_to_a(t_node *highest, int position,
	int size, t_stack *stack)
{
	int	i;

	i = 0;
	highest = get_highest_value(stack->b);
	position = get_node_position(stack->b, highest);
	size = get_stack_size(stack->b);
	while (stack->b != highest && i < size)
	{
		if (position <= size / 2)
			rb(stack);
		else
			rrb(stack);
		i++;
	}
	pa(stack);
}
