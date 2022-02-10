/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_function.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:17 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:38:06 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_FUNCTION_H

# define ROTATE_FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "./push_swap.h"

void	rot_a(t_list **alst, t_lstmove **mlst);
void	rot_b(t_list **blst, t_lstmove **mlst);
void	rot_r(t_list **alst, t_list **blst, t_lstmove **mlst);

#endif
