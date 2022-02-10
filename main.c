/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 22:54:50 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

void which_algo(int ac, t_list **alst, t_list **blst, t_lstmove **mlst)
{

	t_list **dup_lst;
	t_list *stack_dup;

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

int main(int ac, char **av)
{
	t_list *stack_a;
	t_list *stack_b;
	t_list **alst;
	t_list **blst;
	t_lstmove *movelst;
	t_lstmove **mlst;

	if (ac >= 2)
	{
		stack_a = arg_to_lst(av);
		alst = &stack_a;
		movelst = NULL;
		mlst = &movelst;
		stack_b = NULL;
		blst = &stack_b;
		which_algo(ac, alst, blst, mlst);
		read_mlst(mlst);
	}
	return (0);
}