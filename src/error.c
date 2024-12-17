/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:59:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 13:16:37 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*ft_print_error(char **argv, char *str, t_flags *flag, t_stack *stack)
{
	if (stack->a)
		free_nodes(stack);
	if (stack)
		free(stack);
	if (argv && flag->split_flag == 1)
		free_split(argv);
	if (flag)
		free(flag);
	ft_putstr_fd(str, 2);
	exit(1);
}
