/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_lst.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:05:30 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:42:33 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUP_LST_H

# define DUP_LST_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

t_list	*ft_lstdup(t_list **alst);
void	cnvrt_lst(t_list **alst, t_list **dup_lst);

#endif