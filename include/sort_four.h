/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:17:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:37:58 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_FOUR_H

# define SORT_FOUR_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "./push_swap.h"

void	push_lowest_to_b(t_list **alst, t_list **blst, t_lstmove **mlst);
void	sort_four(t_list **alst, t_list **blst, t_lstmove **mlst);

#endif