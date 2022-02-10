/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:42:44 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:12:24 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/check.h"

static int	contains_dup(t_list **alst)
{
	t_list	*curr;
	t_list	*next;

	curr = *alst;
	while (curr != NULL)
	{
		next = curr->next;
		while (next)
		{
			if (curr->content == next->content)
				return (1);
			next = next->next;
		}
		curr = curr->next;
	}
	return (0);
}

/*Check if the list is sorted.

Returns 0 if the list is sorted, returns 1 if not.
*/
int	check(t_list **alst)
{
	t_list	*curr;
	t_list	*prev;

	prev = NULL;
	curr = *alst;
	if (!curr->next)
		return (0);
	if (contains_dup(alst) == 1)
		return (0);
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		if (curr && (prev->content > curr->content))
			return (1);
	}
	return (0);
}
