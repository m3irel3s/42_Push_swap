/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   130_give_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:34:50 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/02 14:34:05 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	give_index(char **argv, t_node **stack)
{
	int	*tab;
	int	len;
	int	i;
	t_node	*curr;
	
	len = 0;
	while (argv[len])
		len++;
	curr = *stack;
	tab = NULL;
	tab = init_tab_and_convert(argv, tab, len);
	while (curr)
	{
		i = 0;
		while (i < len)
		{
			if (curr->num == tab[i])
			{
				curr->index = i;
				break;
			}
			i++;
		}
		curr = curr->next;
	}
}

int	*init_tab_and_convert(char **argv, int *tab, int len)
{
	int	i;

	tab = malloc(sizeof(int) * len);
	if (!tab)
		ft_print_error("Memory allocation failed for tab!");
	i = 0;
	while (argv[i])
	{
		tab[i] = ft_atol(argv[i]);
		i++;
	}
	tab = sort_tab(tab, len);
	return tab;
}

int	*sort_tab(int *tab, int len)
{
	int	i;
	int	sorted;
	int	temp;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < len - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
	return tab;
}
