/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:13:53 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:33:08 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_four.h"

void	push_lowest_to_b(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	int	pos;
	int	size;

	pos = pos_lowest(alst);
	size = ft_lstsize(*alst);
	if (pos < size / 2)
	{
		while (pos)
		{
			rot_a(alst, mlst);
			pos--;
		}
	}
	else
	{
		while (size - pos)
		{
			revrot_a(alst, mlst);
			pos++;
		}
	}
	push_b(alst, blst, mlst);
}

void	sort_four(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	push_lowest_to_b(alst, blst, mlst);
	sort_three(alst, mlst);
	push_a(alst, blst, mlst);
}
