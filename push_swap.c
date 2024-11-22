/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/22 17:30:53 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

char 	**check_args(int argc, char **argv);

int main(int argc, char **argv)
{
	char	**data;
	long	*res;
	data = check_args(argc, argv);
	if (!data)
		ft_print_error("data error");
	res = check_duplicates(data);
	if (!res)
		ft_print_error("res error");
	for (size_t i = 0; res[i]; i++)
		printf("%ld\n", res[i]);
	return (0);
}

char	**check_args(int argc, char **argv)
{
	char	**arr;

	arr = NULL;
	if (argc < 2)
		return (NULL);
	else if (argc == 2)
	{
		arr = ft_split(argv[1], ' ');
		check_valid_number(arr, 0);
	}
	else if(argc > 2)
		check_valid_number(argv, 1);
	return (arr);
}



