/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   000_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/27 16:59:27 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int main(int argc, char **argv)
{
	t_node	*a;
	t_node	*temp;
	a = NULL;

	init_stack(argc, argv, &a);
	temp = a;
	printf("------------------------------\n");
	printf("\tBEFORE SA\n");
	printf("------------------------------\n");
	while (temp)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
	}
	a = swap_a(a);
	printf("------------------------------\n");
	printf("\tAFTER SA\n");
	printf("------------------------------\n");
	while (a)
	{
		printf("%d\n", a->num);
		a = a->next;
	}
	return (0);
}

void	init_stack(int argc, char **argv, t_node **a)
{
	*a = NULL;

	argv = check_arguments(argc, argv);
	check_valid_number(argv);
	validate_and_bluid_stack(argv, a);
}
