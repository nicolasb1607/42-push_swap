/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:20:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 20:20:54 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_five.h"

void	sort_five(t_list **alst, t_list **blst, t_lstmove **mlst)
{
	push_lowest_to_b(alst, blst, mlst);
	push_lowest_to_b(alst, blst, mlst);
	sort_three(alst, mlst);
	push_a(alst, blst, mlst);
	push_a(alst, blst, mlst);
}