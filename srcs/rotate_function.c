/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:48:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 14:37:35 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rotate_function.h"

void	rot_a(t_list **alst)
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
}

void	rot_b(t_list **blst)
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
}

void	rot_r(t_list **alst, t_list **blst)
{
	rot_a(alst);
	rot_a(blst);
}