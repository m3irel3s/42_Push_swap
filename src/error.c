/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   999_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:59:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/05 14:26:21 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*ft_print_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}
