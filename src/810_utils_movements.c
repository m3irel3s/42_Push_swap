/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   810_utils_movements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:07:09 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 11:12:59 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*get_last_node(t_node *head)
{
	t_node	*last_node;

	if (!head)
		ft_print_error("No head found!");
	last_node = head;
	while (last_node->next)
		last_node = last_node->next;
	return last_node;
}


