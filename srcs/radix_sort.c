/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:24:02 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:28:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/radix_sort.h"

static int	find_max(t_list **alst)
{
	t_list	*curr;
	int		max;

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

void	loop_sort(int max_bits, t_list **alst, t_list **blst, t_lstmove **mlst)
{
	int		i;
	int		size;
	int		mask;
	t_list	*curr;

	i = 0;
	while (i <= max_bits)
	{
		size = ft_lstsize(*alst);
		while (size)
		{
			curr = *alst;
			mask = 1 << i;
			if ((curr->content & mask) == 0)
				push_b(alst, blst, mlst);
			else
				rot_a(alst, mlst);
			size--;
		}
		while (*blst)
			push_a(alst, blst, mlst);
		i++;
	}
}

void	radix_sort(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	int	max_bits;
	int	max_int;

	max_int = find_max(alst);
	max_bits = 0;
	while ((max_int >> max_bits) != 0)
		max_bits++;
	loop_sort(max_bits, alst, blst, mlst);
}
