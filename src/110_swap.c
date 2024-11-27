/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   110_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:55:44 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/27 16:59:23 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*swap_a(t_node *a)
{
	t_node *head;
	t_node *tail;

	if (!a || !a->next)
		return (a);
	tail = a;
	head = a->next;
	head->prev = NULL;
	tail->next = head->next;
	tail->prev = head;
	head->next = tail;
	a = head;
	return (a);
}




