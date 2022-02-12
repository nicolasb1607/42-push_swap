/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:47:53 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:57:33 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstdelall(t_list **alst)
{
	t_list *curr;
	t_list *next;
	
	curr = *alst;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}