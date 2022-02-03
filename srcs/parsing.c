/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:14 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 15:08:16 by nburat-d         ###   ########.fr       */
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
t_list **arg_to_lst(int ac , char **av)
{
	int		i;
	t_list *alst;
	t_list	*new;
	int	content;

	
	alst = NULL;
	alst = malloc(sizeof(t_list));
	if (!alst)
		return (NULL);
	alst->next = NULL;
	alst->content = ft_atoi(av[1]);
	i = 2;
	while(i < ac)
	{
		content = ft_atoi(av[i]);
		new = ft_lstnew(content);
		printf("content of new = %d\n", new->content);
		printf("apres new node\n");
		ft_lstadd_back(&alst, new);
		printf("alst = %p\n", (alst));
		i++;
	}
	printf("fin de la boucle\n");
	printf("content first element = %d\n", alst->content);
	return(&alst);
}
