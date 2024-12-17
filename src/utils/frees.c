/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:39:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 13:07:12 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	free_nodes(t_stack *stack)
{
	t_node	*curr;
	t_node	*temp;

	curr = stack->a;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	stack->a = NULL;
}

void	free_split(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}
