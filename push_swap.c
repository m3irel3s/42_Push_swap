/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 17:21:56 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

char 	**check_args(int argc, char **argv);
char	**check_are_numbers(char **res);
void	init_stack(char **data, t_stack *a);

int main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**data;

	data = check_args(argc, argv);
	if (!data)
		return (1);
	a = malloc(sizeof(t_stack));
	init_stack(data, a);
	
}

char	**check_args(int argc, char **argv)
{
	size_t	i;
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
		while (ft_isdigit(arr[i][j]) || arr[i][j] == '-' || arr[i][j] == '+')
		{
			j++;
			if(arr[i][j] == '-' || arr[i][j] == '+')
				return (NULL);
		}
		i++;
	}
	return (arr);
}
void	init_stack(char **data, t_stack *a)
{

}



