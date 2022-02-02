/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/02 18:59:26 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

int main(int ac, char **av)
{
	t_list **stack_a;
	t_list *current;
	
	if (ac >= 2)
	{
		stack_a = arg_to_lst(ac, av);
		printf("apres creation liste\n");
		current = *stack_a;
		printf("val dans current = %p\n", (int *) current->content);
		while(current != NULL)
		{
			ft_putstr(current->content);
			current = current->next;
		}
	}
	return (0);
}