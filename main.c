/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 20:47:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

int main(int ac, char **av)
{
	t_list *stack_a;
	t_list *stack_b;
	t_list **alst;
	t_list **blst;
	t_lstmove *movelst;
	t_lstmove **mlst;

	t_list **dup_lst;
	t_list *stack_dup;
	
	if (ac >= 2)
	{
		
		stack_a = arg_to_lst(av);
		alst = &stack_a;
		movelst = NULL;
		mlst = &movelst;
		stack_b = NULL;
		blst = &stack_b;
		
		stack_dup = ft_lstdup(alst);
		dup_lst = &stack_dup; 
		
		if(check(alst) == 0)
			return (0);
		if(ac == 3)
				swap_a(alst, mlst);	
		else if (ac == 4)
			sort_three(alst, mlst);
		else if (ac == 5)
			sort_four(alst, blst, mlst);
		else if (ac == 6)
			sort_five(alst, blst, mlst);
		else 
		{
			bsort_lst(dup_lst);
			cnvrt_lst(alst, dup_lst);
			radix_sort(alst, blst, mlst);
		}
		
		t_list *current;
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		// printf("---stack_b-----\n");
		current = *blst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		read_mlst(mlst);	
	}
	return (0);
}