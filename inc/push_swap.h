/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:35:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 23:07:38 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "../42_Libft/FT_Libft/inc/libft.h"
# include "../42_Libft/FT_Printf/inc/ft_printf.h"
# include "../42_Libft/Get_next_line/inc/get_next_line.h"

//=============================================================================//
//                                  Structures                                 //
//=============================================================================//

typedef struct s_stack {
	int	num;
	int	index;
	
	struct s_stack *next;
} t_stack;


//=============================================================================//
//                              Main functions                                 //
//=============================================================================//

char 	**check_args(int argc, char **argv);
char	**check_are_numbers(char **res);

#endif