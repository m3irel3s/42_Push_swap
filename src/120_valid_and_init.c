/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   120_valid_and_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:59:57 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 11:54:04 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	validate_and_bluid_stack(char **argv, t_node **a)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		long	num;

		num = validate_and_convert(argv[i]);
		check_for_duplicates(*a, (int)num);
		append_to_stack(a, (int)num);
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

void append_to_stack(t_node **a, int num)
{
	t_node *new_node;
	
	new_node = malloc(sizeof(t_node));
	if (!new_node)
		ft_print_error("Memory allocation failed!");
	new_node->num = num;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*a == NULL)
		*a = new_node;
	else
	{
		t_node *last;

		last = *a;
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
}