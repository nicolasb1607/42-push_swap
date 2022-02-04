/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:04:54 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

int main(int ac, char **av)
{
	t_list *stack_a;
	t_list *stack_b;
	t_list *current;
	t_list **alst;
	 t_list **blst;
	
	if (ac >= 2)
	{
		
		stack_a = arg_to_lst(av);
		alst = &stack_a;
		if(check(alst) == 0)
			return (0);
		current = stack_a;
		printf("---stack_a-----\n");
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		

		
		printf("---stack_a-----\n");
		swap_a(alst);
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}


		stack_b = NULL;
		blst = &stack_b;
		push_b(alst, blst);
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		printf("---stack_b-----\n");
		current = *blst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		push_b(alst, blst);
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		printf("---stack_b-----\n");
		current = *blst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}

		swap_s(alst, blst);
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		printf("---stack_b-----\n");
		current = *blst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}

		push_a(alst, blst);
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		printf("---stack_b-----\n");
		current = *blst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		revrot_a(alst);
		printf("---stack_a-----\n");
		current = *alst;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
		
	}
	return (0);
}