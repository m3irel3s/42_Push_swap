/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/17 10:32:26 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	t_flags	*flag;
	int		chunk_divisor;

	flag = malloc(sizeof(flag));
	flag->split_flag = 0;
	stack = malloc(sizeof(t_stack));
	argv = check_arguments(argc, argv, flag, stack);
	init_stack(argv, stack, flag);
	if (stack->total_len > 100)
		chunk_divisor = 9;
	if (stack->total_len <= 100)
		chunk_divisor = 6;
	if (stack->total_len <= 5)
		chunk_divisor = 3;
	sort_algorithm(stack, chunk_divisor);
	if (flag->split_flag == 1)
		free_split(argv);
	free_nodes(stack);
	free(stack);
	free(flag);
}
