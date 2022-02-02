/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:14 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/02 18:48:41 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/parsing.h"

#include <stdio.h>

t_list	**arg_to_lst(int ac , char **av)
{
	t_list	**alst;
	int		i;
	t_list	*new;
	int		content;
	
	i = 1;
	alst = NULL;
	while(i < ac)
	{
		printf("avant atoi\n");
		content = ft_atoi(av[i]);
		printf("avant nouvel element = %d\n", content);
		new = ft_lstnew(&content);
		printf("apres nouvel element\n");
		ft_lstadd_back(alst, new);
		printf("apres addback\n");
		i++;
	}
	return(alst);
}
