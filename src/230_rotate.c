/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   230_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:45:59 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/02 12:13:13 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;
	t_node	*temp_head;

	head = (*stack);
	tail = get_last_node(head);
	temp_head = head;
	head = head->next;
	head->prev = NULL;
	tail->next = temp_head;
	temp_head->next = NULL;
	(*stack) = head;
}

