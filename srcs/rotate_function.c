/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:48:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/09 11:22:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rotate_function.h"

void	rot_a(t_list **alst, t_lstmove **mlst)
{
	t_list *first;
	t_list *last;

	last = ft_lstlast(*alst);
	first = *alst;
	if (!first->next)
		return;
	*alst = first->next;
	last->next = first;
	first->next = NULL;
	add_move(mlst, "ra");
}

void	rot_b(t_list **blst, t_lstmove **mlst)
{
	

	t_list *first;
	t_list *last;

	last = ft_lstlast(*blst);
	first = *blst;
	if (!first->next)
		return;
	*blst = first->next;
	last->next = first;
	first->next = NULL;

	add_move(mlst, "rb");

}

void	rot_r(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	rot_a(alst, mlst);
	rot_a(blst, mlst);
}