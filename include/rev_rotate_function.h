/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_function.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:30:26 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 14:44:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REV_ROTATE_FUNCTION_H

# define REV_ROTATE_FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

void	revrot_a(t_list **alst);
void	revrot_b(t_list **blst);
void	revrot_r(t_list **alst, t_list **blst);


#endif
