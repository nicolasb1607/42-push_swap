/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:27:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:34:16 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_three.h"

int	pos_lowest(t_list **alst)
{
	t_list	*curr;
	int		min;
	int		i;
	int		pos;

	curr = *alst;
	min = curr->content;
	i = 0;
	pos = 0;
	while (curr)
	{
		if (min > curr->content)
		{
			min = curr->content;
			pos = i;
		}
		curr = curr->next;
		i++;
	}
	return (pos);
}

int	is_sorted(t_list **alst)
{
	t_list	*curr;

	curr = *alst;
	while (curr->next)
	{
		if (curr->content > curr->next->content)
			return (1);
		curr = curr->next;
	}
	return (0);
}

void	sort_three(t_list **alst, t_lstmove **mlst)
{
	t_list	*frst;
	t_list	*scnd;
	t_list	*thrd;

	frst = *alst;
	scnd = frst->next;
	thrd = scnd->next;
	if (pos_lowest(alst) == 0 && scnd->content > thrd->content)
	{
		swap_a(alst, mlst);
		rot_a(alst, mlst);
	}
	else if (pos_lowest(alst) == 1 && frst->content > thrd->content)
		rot_a(alst, mlst);
	else if (pos_lowest(alst) == 1 && frst->content < thrd->content)
		swap_a(alst, mlst);
	else if (pos_lowest(alst) == 2 && frst->content < scnd->content)
		revrot_a(alst, mlst);
	else if (pos_lowest(alst) == 2 && frst->content > scnd->content)
	{
		swap_a(alst, mlst);
		revrot_a(alst, mlst);
	}
}
