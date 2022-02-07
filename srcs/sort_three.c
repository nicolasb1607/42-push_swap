/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:27:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/07 14:07:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_three.h"

void	sort_three(t_list **alst, t_lstmove **mlst)
{
	t_list	*frst;
	t_list	*scnd;
	t_list	*thrd;

	frst = *alst;
	scnd = frst->next;
	thrd = scnd->next;
	if (frst->content > scnd->content && frst->content < thrd->content)
		swap_a(alst, mlst);
	if (frst->content > scnd->content && frst->content > thrd->content)
	{
		if (scnd->content < thrd->content)
			rot_a(alst, mlst);
		else
		{
			swap_a(alst, mlst);
			revrot_a(alst, mlst);
		}
	}
}