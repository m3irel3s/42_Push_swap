/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   120_valid_and_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:59:57 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/02 14:19:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	validate_and_bluid_stack(char **argv, t_node **stack)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		long	num = 0;
		num = validate_and_convert(argv[i]);
		check_for_duplicates(*stack, (int)num);
		append_to_stack(stack, (int)num);
		i++;
	}
}

long	validate_and_convert(char *argv)
{
	long	num;

	num = ft_atol(argv);
	if (num > INT_MAX || num < INT_MIN)
		ft_print_error("INT_MAX || INT_MIN detected!");
	return num;
}
void	check_for_duplicates(t_node *a, int num)
{
	while (a)
	{
		if (a->num == num)
			ft_print_error("Found duplicate!");
		a = a->next;
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