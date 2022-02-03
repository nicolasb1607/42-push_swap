/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:04 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 17:48:34 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/swap_function.h"

void	swap_a(t_list **alst, t_list *stack_a)
{
	t_list *temp;

	if (stack_a && stack_a->next != NULL)
	{
		temp = stack_a->next;
		stack_a->next = temp->next;
		temp->next = stack_a;
		*alst = temp;
	}
	// inscription sur la liste des commandes effectues
	
}
