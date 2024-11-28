/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   000_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 13:59:40 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack;
	stack = malloc(sizeof(t_stack));
	stack->a = NULL;
	init_stack(argc, argv, &stack->a);
	t_node *temp;
	temp = stack->a;
	printf("##########\n");
	while (temp)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
	}
	printf("##########\n");
	swap(&stack->a);
	temp = stack->a;
	while (temp)
	{
		printf ("%d\n", temp->num);
		temp = temp->next;
	}
	return (0);
}

void	init_stack(int argc, char **argv, t_node **stack)
{
	argv = check_arguments(argc, argv);
	check_valid_number(argv);
	validate_and_bluid_stack(argv, stack);
}
