/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:04 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 21:37:13 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/swap_function.h"

void	swap_a(t_list **alst, t_lstmove **mlst)
{
	t_list *temp;
	t_list *curr;

	curr = *alst;
	if (curr && curr->next != NULL)
	{
		temp = curr->next;
		curr->next = temp->next;
		temp->next = curr;
		*alst = temp;
	}
	add_move(mlst, "sa");
}

void	swap_b(t_list **blst, t_lstmove **movelst)
{
	t_list *temp;
	t_list *curr;

	curr = *blst;
	if (curr && curr->next != NULL)
	{
		temp = curr->next;
		curr->next = temp->next;
		temp->next = curr;
		*blst = temp;
	}
	add_move(movelst, "sb");
}

void	swap_s(t_list **alst,t_list **blst, t_lstmove **mlst)
{
	swap_a(alst, mlst);
	swap_b(blst, mlst);
}