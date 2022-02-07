/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_function.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:31:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/07 14:01:37 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rev_rotate_function.h"

void	revrot_a(t_list **alst, t_lstmove **mlst)
{
	t_list	*prev;
	t_list	*curr;

	prev = NULL;
	curr = *alst;
	while (curr->next != NULL)
	{ 
		prev = curr;
		curr = curr->next;
	}
	curr->next = *alst;
	prev->next = NULL;
	*alst = curr;
	add_move(mlst, "rra");

}

void	revrot_b(t_list **blst, t_lstmove **mlst)
{
	t_list	*prev;
	t_list	*curr;

	prev = NULL;
	curr = *blst;
	while (curr->next != NULL)
	{ 
		prev = curr;
		curr = curr->next;
	}
	curr->next = *blst;
	prev->next = NULL;
	*blst = curr;

	add_move(mlst, "rrb");

}

void	revrot_r(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	revrot_a(alst, mlst);
	revrot_b(blst, mlst);
}