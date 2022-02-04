/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:01 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 21:49:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_function.h"

void	push_b(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	t_list *temp;
	t_list *curr_a;
	t_list *curr_b;
	
	curr_a = *alst;
	curr_b = *blst;
	temp = NULL;
	if (curr_a != NULL)
	{
		if(curr_b != NULL)
			temp = curr_b;
		curr_b = curr_a;
		curr_a = curr_a->next;
		curr_b->next = NULL;
		if(temp != NULL)
			curr_b->next = temp;
		*alst = curr_a;
		*blst = curr_b;
	}
	add_move(mlst, "pb");
}

void	push_a(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	t_list *temp;
	t_list *curr_a;
	t_list *curr_b;
	
	curr_a = *alst;
	curr_b = *blst;
	temp = NULL;
	if (curr_b != NULL)
	{
		if(curr_a != NULL)
			temp = curr_a;
		curr_a = curr_b;
		curr_b = curr_b->next;
		curr_a->next = NULL;
		if(temp != NULL)
			curr_a->next = temp;
		*alst = curr_a;
		*blst = curr_b;
	}
	add_move(mlst, "pb");
}