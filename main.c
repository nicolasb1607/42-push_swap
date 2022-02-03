/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:39:20 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 16:25:42 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

#include <stdio.h>

int main(int ac, char **av)
{
	t_list *stack_a;
	t_list *current;
	
	if (ac >= 2)
	{
		stack_a = arg_to_lst(ac, av);
		current = stack_a;
		while(current != NULL)
		{
			ft_putnbr(current->content);
			ft_putchar('\n');
			current = current->next;
		}
	}
	return (0);
}