/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:53:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/10 17:23:50 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_algorithm(t_stack *stack)
{
	split_into_chunks(stack);
	if (!is_sorted(stack))
		sort_three(stack);
	
}