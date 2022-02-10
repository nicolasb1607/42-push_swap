/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:24:02 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 12:42:39 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/radix_sort.h"

static int find_max(t_list **alst)
{
	t_list *curr;
	int max;

	max = 0;
	curr = *alst;
	while (curr)
	{
		if (curr->content > max)
			max = curr->content;
		curr = curr->next;
	}
	return (max);
}

static void	find_less_move(t_list **alst, int mask, t_lstmove **mlst)
{
	int pos; 
	int size; 
	t_list *curr;

	pos = 1;
	curr = *alst;
	size = ft_lstsize(*alst);
	while ((curr->content & mask) != 0 && (size - 1))
	{
		curr = curr->next;
		pos++;
		size--;
	}
	size = ft_lstsize(*alst);
	if (pos <= size / 2)
		rot_a(alst, mlst);
	else
		revrot_a(alst, mlst);
}

void radix_sort(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	int mask;
	int max_bits;
	int max_int;
	int i;
	int size;
	t_list *curr;

	max_int = find_max(alst);
	
	max_bits = 0;
	while ((max_int >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		size = ft_lstsize(*alst);
		while (size)
		{
			curr = *alst;
			mask = 1 << i;
			if ((curr->content & mask) == 0)
				push_b(alst, blst, mlst);
			else
				find_less_move(alst, mask, mlst);
			size--;
		}
		while (*blst)
			push_a(alst, blst, mlst);
		i++;
	}
}