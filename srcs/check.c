/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:42:44 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:44:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/check.h"

int check_arg(char **av)
{
	int i;
	
	i = 0;
	while (av[++i])
	{
		if (av[i][0])
		{
			if (ft_is_int(av[i]) == 0)
			{
				ft_putstr("Error\n");
				exit (0);
			}
		}
	}
	return (0);
}

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
				ft_putstr("Error\n");
				return (1);
			}
			next = next->next;
		}
		curr = curr->next;
	}
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
