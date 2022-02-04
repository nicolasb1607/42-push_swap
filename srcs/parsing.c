/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:14 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:05:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

#include <stdio.h>

t_list *arg_to_lst(char **av)
{
	int		i;
	t_list *alst;
	t_list	*new;

	alst = ft_lstnew(ft_atoi(av[1]));
	i = 2;
	while(av[i])
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&alst, new);
		i++;
	}
	return(alst);
}
