/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:32:07 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 21:51:12 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/move_function.h"
#include "../include/push_swap.h"

void	add_move(t_lstmove **movelst, char *move)
{
	t_lstmove *new;
	t_lstmove *last;
	
	new = malloc(sizeof(t_lstmove));
	if(!new)
		return ;
	new->content = move;
	new->next = NULL;
	if(!*movelst)
	{
		*movelst = new;
		return ;
	}
	last = *movelst;
	while (last->next)
		last = last->next;
	last->next = new;		
}

void	read_mlst(t_lstmove **mlst)
{
	t_lstmove *curr;
	
	curr = *mlst;
	while (curr)
	{
		ft_putstr(curr->content);
		ft_putchar('\n');
		curr = curr->next;
	}
}