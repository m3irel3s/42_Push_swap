/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 23:13:08 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

char 	**check_args(int argc, char **argv);
char	**check_are_numbers(char **res);
// void	init_stack(char **data, t_stack *a);

int main(int argc, char **argv)
{
	// t_stack	*a;
	// t_stack	*b;
	char	**data;
	size_t	i;

	data = check_args(argc, argv);
	if (!data)
		return (1);
	// a = malloc(sizeof(t_stack));
	// init_stack(data, a);
	i = 0;
	while (data[i])
	{

		printf("%s\n", data[i]);
		i++;
	}
	
}

char	**check_args(int argc, char **argv)
{
	int		i;
	char	**arr;

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
	if(!check_are_numbers(arr))
		return (NULL);
	return (arr);
}

char	**check_are_numbers(char **arr)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		if (arr[i][j] == '-' || arr[i][j] == '+')
			j++;
		while (arr[i][j])
		{
			if (!ft_isdigit(arr[i][j]))
				return (NULL);
			j++;
		}
		if (j == 1 && (arr[i][0] == '-' || arr[i][0] == '+'))
			return (NULL);
		i++;
	}
	return (arr);
}
// void	init_stack(char **data, t_stack *a)
// {

// }



