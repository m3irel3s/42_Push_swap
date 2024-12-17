/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_and_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:59:57 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 13:16:16 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	init_stack(char **argv, t_stack *stack, t_flags *flag)
{
	stack->b = NULL;
	stack->a = NULL;
	check_valid_number(argv, flag, stack);
	validate_and_build_stack(argv, &stack->a, stack, flag);
	give_index(argv, &stack->a, stack);
}

void	validate_and_build_stack(char **argv, t_node **stack,
			t_stack *stacks, t_flags *flag)
{
	int		i;
	long	num;

	i = 0;
	while (argv[i])
	{
		num = validate_and_convert(argv[i], argv, stacks, flag);
		check_for_duplicates((int)num, stacks, flag, argv);
		append_to_stack(stack, (int)num);
		i++;
	}
	stacks->total_len = i;
}

long	validate_and_convert(char *str, char **argv, t_stack *stacks,
			t_flags *flag)
{
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		ft_print_error(argv, "Error\n", flag, stacks);
	return (num);
}

void	check_for_duplicates(int num, t_stack *stack, t_flags *flag,
			char **argv)
{
	t_node	*curr;

	curr = stack->a;
	while (curr)
	{
		if (curr->num == num)
			ft_print_error(argv, "Error\n", flag, stack);
		curr = curr->next;
	}
}

void	append_to_stack(t_node **stack, int num)
{
	t_node	*new_node;
	t_node	*last;

	new_node = create_new_node(num);
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
}
