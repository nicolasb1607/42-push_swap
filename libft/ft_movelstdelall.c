/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movelstdelall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:57:58 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/12 20:07:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_movelstdelall(t_lstmove **alst)
{
	t_lstmove	*curr;
	t_lstmove	*next;

	curr = *alst;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
