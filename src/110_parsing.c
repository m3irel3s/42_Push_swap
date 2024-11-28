/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   110_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:19:52 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 11:54:07 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**check_arguments(int argc, char **argv)
{
	if (argc < 2)
		ft_print_error("Less than 2 arguments given!");
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else if(argc > 2)
		argv = argv + 1;
	return argv;
}

char	**check_valid_number(char **argv)
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
			ft_print_error("No string, handled the - or + input!");
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				ft_print_error("Not digit!\n");
			j++;
		}
		i++;
	}
	return (argv);
}