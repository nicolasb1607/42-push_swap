/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 17:54:30 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_FUNCTION_H

# define PUSH_FUNCTION_H


# include <unistd.h>
# include <stdlib.h>
# include "./parsing.h"

void	push_b(t_list **alst, t_list *stack_a, t_list **blst, t_list *stack_b);

 
#endif 