/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:35:55 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/22 15:38:48 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "../42_Libft/FT_Libft/inc/libft.h"
# include "../42_Libft/FT_Printf/inc/ft_printf.h"
# include "../42_Libft/Get_next_line/inc/get_next_line.h"

//=============================================================================//
//                               STRUCTURES                                    //
//=============================================================================//

typedef struct s_stack {
	int	num;
	int	index;
	
} t_stack;

//=============================================================================//
//                            PARSING FUNCTIONS                                //
//=============================================================================//

char 	**check_args(int argc, char **argv);
char	**check_valid_number(char **res);
int		*check_duplicates(char **arr);
int		*convert_into_integer(char **arr);


//=============================================================================//
//                            MOVEMENTS FUNCTIONS                              //
//=============================================================================//




//=============================================================================//
//                            ALGORITHM FUNCTIONS                              //
//=============================================================================//



//=============================================================================//
//                              ERROR FUNCTIONS                                //
//=============================================================================//

char	*ft_print_error(char *str);


#endif