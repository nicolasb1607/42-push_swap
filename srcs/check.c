/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:42:44 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:22:16 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/check.h"

static int contains_dup(t_list **alst)
{
	t_list *curr;
	t_list *next;
	
	curr = *alst;
	while (curr != NULL)
	{
		next = curr->next;
		while (next)
		{
			if (curr->content == next->content)
			{
				ft_putstr("Error, the list contains duplicates numbers\n");
				return (1);
			}
			next = next->next;
		}
		curr = curr->next;
	}
	ft_putstr("OK, Doesn't contain duplicates numbers\n");
	return (0);
}

/*Check if the list is sorted.

Returns 0 if the list is sorted, returns 1 if not.
*/
int check(t_list **alst)
{
	t_list *curr;
	t_list *prev;

	prev = NULL;
	curr = *alst;
	if (!curr->next)
	{
		ft_putstr("Only one number, nothing to be sorted\n");
		return (0);
	}
	if (contains_dup(alst) == 1)
		return (0);
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		if (curr && (prev->content > curr->content))
		{
			ft_putstr("Error numbers not sorted\n");
			return (1);
		}
	}
	ft_putstr("OK all numbers are sorted\n");
	return (0);
}
