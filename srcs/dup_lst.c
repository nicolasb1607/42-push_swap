/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:04:54 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/08 19:24:16 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/dup_lst.h"

t_list *ft_lstdup(t_list **alst)
{
	int size;
	t_list *curr;
	t_list *dup;
	t_list *new;

	size = ft_lstsize(*alst);
	curr = *alst;
	new = ft_lstnew(curr->content);
	dup = new;
	curr = curr->next;
	while (size - 1)
	{
		new = ft_lstnew(curr->content);
		ft_lstadd_back(&dup, new);
		size--;
		curr = curr->next;
	}
	return (dup);
}

void cnvrt_lst(t_list **alst, t_list **dup_lst)
{
	int i;
	t_list *curra;
	t_list *currdup;

	i = 0;
	currdup = *dup_lst;
	while (currdup)
	{
		curra = *alst;
		while (curra)
		{
			if (currdup->content == curra->content)
			{
				curra->content = i;
				i++;
				break;
			}
			curra = curra->next;
		}
		currdup = currdup->next;
	}
}