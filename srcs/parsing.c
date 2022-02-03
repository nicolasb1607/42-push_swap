/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:14 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 16:25:33 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

#include <stdio.h>
/*
typedef struct s_head
{
	t_list *head;
	int		nb_element;
}	t_head
*/
t_list *arg_to_lst(int ac , char **av)
{
	int		i;
	t_list *alst;
	t_list	*new;

	alst = ft_lstnew(ft_atoi(av[1]));
	i = 2;
	while(i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&alst, new);
		i++;
	}
	return(alst);
}
