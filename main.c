/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:09:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

void	which_algo(int ac, t_list **alst, t_list **blst, t_lstmove **mlst)
{
	t_list	**dup_lst;
	t_list	*stack_dup;

	if (check(alst) == 0)
		return ;
	if (ac == 3)
		swap_a(alst, mlst);
	else if (ac == 4)
		sort_three(alst, mlst);
	else if (ac == 5)
		sort_four(alst, blst, mlst);
	else if (ac == 6)
		sort_five(alst, blst, mlst);
	else
	{
		stack_dup = ft_lstdup(alst);
		dup_lst = &stack_dup;
		bsort_lst(dup_lst);
		cnvrt_lst(alst, dup_lst);
		radix_sort(alst, blst, mlst);
	}
}

int	main(int ac, char **av)
{
	t_init		lista;
	t_init		listb;
	t_lstmove	*movelst;
	t_lstmove	**mlst;

	if (ac >= 2)
	{
		lista.stack = arg_to_lst(av);
		lista.head = &lista.stack;
		movelst = NULL;
		mlst = &movelst;
		listb.stack = NULL;
		listb.head = &(listb.stack);
		which_algo(ac, lista.head, listb.head, mlst);
		read_mlst(mlst);
	}
	return (0);
}
