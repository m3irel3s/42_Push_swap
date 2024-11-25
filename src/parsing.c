/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:42:29 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/22 17:27:05 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**check_valid_number(char **arr, int i);
long	*check_duplicates(char **arr);
long	*convert_into_integer(char **arr);

char	**check_valid_number(char **arr, int i)
{
	size_t	j;

	while (arr[i])
	{
		j = 0;
		if (arr[i][j] == '-' || arr[i][j] == '+')
			j++;
		if (!arr[i][j])
			ft_print_error("No string, handled the - or + input!");
		while (arr[i][j])
		{
			if (!ft_isdigit(arr[i][j]))
				ft_print_error("Not digit!");
			j++;
		}
		i++;
	}
	return (arr);
}

long	*convert_into_integer(char **arr)
{
	long	*res;
	size_t	i;

	i = 0;
	while (arr[i])
		i++; 
	res = malloc(sizeof(long) * i);
	if (!res)
		ft_print_error("Error allocating space for the res(atoi)!");
	i = 0;
	while (arr[i])
	{
		res[i] = ft_atol(arr[i]);
		i++;
	}
	i = 0;
	while (res[i])
	{
		if (res[i] > INT_MAX || res[i] < INT_MIN)
			ft_print_error("INT_MAX || INT_MIN detected!");
		i++;
	}
	return (res);
}

long	*check_duplicates(char **arr)
{
	long	*res;
	size_t	i;
	size_t	j;

	res = convert_into_integer(arr);
	i = 0;
	while (res[i])
	{
		j = i + 1;
		while (res[j])
		{
			if (res[i] == res[j])
				ft_print_error("Found duplicate!");
			j++;
		}
		i++;
	}
	return (res);
}