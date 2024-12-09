/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:02 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/09 14:56:15 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

// ## TEST FOR MOVEMENTS
// int main(int argc, char **argv)
// {
// 	t_stack *stack;
// 	stack = malloc(sizeof(t_stack));
// 	stack->a = NULL;
// 	stack->b = NULL;
// 	init_stack(argc, argv, stack);
// 	t_node *temp_a;
// 	// temp_a = stack->a;
// 	stack->b = create_new_node(3);
// 	stack->b->next = create_new_node(2);
// 	stack->b->next->next = create_new_node(5);
// 	temp_a = stack->a;
// 	printf("BEFORE ROTATE\n");
// 	while (temp_a)
// 	{
// 		printf("%d\n", temp_a->num);
// 		temp_a = temp_a->next;
// 	}

// 	printf("AFTER ROTATE\n");
// 	rev_rotate(&stack->a);
// 	temp_a = stack->a;
// 	while (temp_a)
// 	{
// 		printf("%d\n", temp_a->num);
// 		temp_a = temp_a->next;
// 	}
// 	return (0);
// }

// #TEST FOR INDEXES
// int main(int argc, char **argv)
// {
// 	t_stack *stack;
// 	stack = malloc(sizeof(t_stack));
// 	init_stack(argc, argv, stack);

// 	t_node	*temp;
// 	temp = stack->a;
// 	while (temp)
// 	{
// 		printf("%d\t", temp->index);
// 		printf("%d\n", temp->num);
// 		temp = temp->next;
// 	}
// }

 int main(int argc, char **argv)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	argv = check_arguments(argc, argv);
	init_stack(argv, stack);
	test_sort(stack);
}

void	init_stack(char **argv, t_stack *stack)
{
	stack->b = NULL;
	stack->a = NULL;
	check_valid_number(argv);
	validate_and_bluid_stack(argv, &stack->a);
	give_index(argv, &stack->a);
}
