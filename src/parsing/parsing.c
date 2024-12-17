/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:19:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/16 13:01:45 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

char	**check_arguments(int argc, char **argv, t_flags *flag, t_stack *stack)
{
	if (argc < 2)
	{
		free(stack);
		free(flag);
		exit(1);
	}
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		flag->split_flag = 1;
	}
	else if (argc > 2)
		argv = argv + 1;
	return (argv);
}

char	**check_valid_number(char **argv, t_flags *flag, t_stack *stack)
{
	size_t	j;
	size_t	i;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (!argv[i][j])
			ft_print_error(argv, "Error\n", flag, stack);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				ft_print_error(argv, "Error\n", flag, stack);
			j++;
		}
		i++;
	}
	return (argv);
}
