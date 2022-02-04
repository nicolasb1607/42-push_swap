/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:02:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_FUNCTION_H

# define PUSH_FUNCTION_H


# include <unistd.h>
# include <stdlib.h>
# include "./parsing.h"

void	push_b(t_list **alst, t_list **blst);
void	push_a(t_list **alst, t_list **blst);
 
#endif 