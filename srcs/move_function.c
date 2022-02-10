/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:32:07 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:16:39 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/move_function.h"

void	add_move(t_lstmove **movelst, char *move)
{
	t_lstmove	*new;
	t_lstmove	*last;

	new = malloc(sizeof(t_lstmove));
	if (!new)
		return ;
	new->content = move;
	new->next = NULL;
	if (!*movelst)
	{
		*movelst = new;
		return ;
	}
	last = *movelst;
	while (last->next)
		last = last->next;
	last->next = new;
}

static void	delmove(t_lstmove *prev, t_lstmove *curr, t_lstmove *next)
{
	prev->next = next->next;
	free(curr);
	free(next);
}

void	filter(t_lstmove **mlst)
{
	t_lstmove	*prev;
	t_lstmove	*curr;
	t_lstmove	*next;

	curr = *mlst;
	next = curr->next;
	prev = NULL;
	while (curr->next)
	{
		if ((ft_strcmp(curr->content, "pb") == 0)
			&& (ft_strcmp(next->content, "pa") == 0))
		{
			delmove(prev, curr, next);
			prev = NULL;
			curr = *mlst;
			next = curr->next;
		}
		else
		{
			prev = curr;
			curr = next;
			next = next->next;
		}
	}
}

void	read_mlst(t_lstmove **mlst)
{
	t_lstmove	*curr;

	if (*mlst == NULL)
		return ;
	filter(mlst);
	curr = *mlst;
	while (curr)
	{
		ft_putstr(curr->content);
		ft_putchar('\n');
		curr = curr->next;
	}
}
