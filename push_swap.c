/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/22 15:48:45 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

char 	**check_args(int argc, char **argv);

int main(int argc, char **argv)
{
	char	**data;
	data = check_args(argc, argv);
	if (!data)
		return (1);
	if (!check_duplicates(data))
		printf("duplicate found");
	return (0);
	
}

char	**check_args(int argc, char **argv)
{
	int		i;
	char	**arr;

	arr = NULL;
	if (argc < 2)
		return (NULL);
	else if (argc == 2)
		arr = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		i = 1;
		arr = malloc(sizeof(char *) * argc - 1);
		while (i < argc)
		{
			if (!arr)
				return (NULL);
			arr[i - 1] = argv[i];
			i++;
		}
	}
	else
		ft_printf("%s", "Error");
	if(!check_valid_number(arr))
		return (NULL);
	return (arr);
}



