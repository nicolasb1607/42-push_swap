/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:12:55 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/08 19:07:18 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/buble_sort.h"

static void	swap(t_list *a, t_list *b)
{
	int tmp;

	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}

void	bsort_lst(t_list **alst)
{
	t_list *curr;
	t_list *next;

	curr = *alst;
	
	while (curr)
	{
		next = curr->next;
		while (next)
		{
			if (curr->content > next->content)
				swap(curr, next);
			next = next->next;
		}
		curr = curr->next;
	}
}