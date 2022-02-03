/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:29:40 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 14:50:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Ajoute l’élément new à la fin de la liste.

#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.*/
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;
	
	if (!alst)
	{
		alst = &new;
		return ;
	}
	if (*alst != NULL && new != NULL)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
}
