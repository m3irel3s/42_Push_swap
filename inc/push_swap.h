/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:35:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/28 13:24:03 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../42_Libft/FT_Libft/inc/libft.h"
# include "../42_Libft/FT_Printf/inc/ft_printf.h"
# include "../42_Libft/Get_next_line/inc/get_next_line.h"

//=============================================================================//
//                               STRUCTURES                                    //
//=============================================================================//

typedef struct s_node {
	int	num;

	struct s_node *prev;
	struct s_node *next;
}	t_node;

typedef struct s_stack {

	t_node	*a;
	t_node	*b;
}	t_stack;


//=============================================================================//
//                            PARSING FUNCTIONS                                //
//=============================================================================//

void	init_stack(int argc, char **argv, t_node **stack);
char	**check_arguments(int argc, char **argv);
void	validate_and_bluid_stack(char **argv, t_node **stack);
long	validate_and_convert(char *argv);
void	check_for_duplicates(t_node *a, int num);
void	append_to_stack(t_node **stack, int num);
char	**check_valid_number(char **argv);


//=============================================================================//
//                            MOVEMENTS FUNCTIONS                              //
//=============================================================================//

t_node	*swap(t_node **stack);
void	swap_a(t_stack **stacks);
void	swap_b(t_stack **stacks);





t_node	*get_last_node(t_node *head);


//=============================================================================//
//                            ALGORITHM FUNCTIONS                              //
//=============================================================================//



//=============================================================================//
//                              ERROR FUNCTIONS                                //
//=============================================================================//

char	*ft_print_error(char *str);


#endif