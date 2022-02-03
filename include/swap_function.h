/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:24 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 18:18:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_FUNCTION_H

# define SWAP_FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

void	swap_a(t_list **alst, t_list *stack_a);
void	swap_b(t_list **blst, t_list *stack_b);
void	swap_s(t_list **alst, t_list *stack_a, t_list **blst, t_list *stack_b);


#endif