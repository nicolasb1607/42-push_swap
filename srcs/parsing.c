/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:14 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/11 16:57:38 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

#include <stdio.h>

t_list *arg_to_lst(char **av)
{
	int i;
	t_list *alst;
	t_list *new;

	if (av[1][0] != '\0')
		alst = ft_lstnew(ft_atoi(av[1]));
	i = 2;
	while (av[i])
	{
		if (av[i][0] != '\0')
		{
			new = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(&alst, new);
		}
		i++;
	}
	return (alst);
}
