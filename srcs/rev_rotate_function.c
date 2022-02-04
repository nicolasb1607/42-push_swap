/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:31:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 14:44:10 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rev_rotate_function.h"

void	revrot_a(t_list **alst)
{
	t_list *first;
	t_list *last;

	last = ft_lstlast(*alst);
	first = *alst;
	*alst = first->next;
	last->next = first;
	first->next = NULL;

}

void	revrot_b(t_list **blst)
{
	t_list *first;
	t_list *last;

	last = ft_lstlast(*blst);
	first = *blst;
	*blst = first->next;
	last->next = first;
	first->next = NULL;

}

void	revrot_r(t_list **alst, t_list **blst)
{
	revrot_a(alst);
	revrot_b(blst);
}