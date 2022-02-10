/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:27:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 19:59:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_three.h"

int pos_lowest(t_list **alst)
{
    t_list *curr;
    int min;
    int i;
    int pos;

    curr = *alst;
    min = curr->content;
    i = 0;
    pos = 0;
    while (curr)
    {
        if (min > curr->content)
        {
            min = curr->content;
            pos = i;
        }
        curr = curr->next;
        i++;
    }
    return (pos);
}

int is_sorted(t_list **alst)
{
    t_list *curr;

    curr = *alst;
    while (curr->next)
    {
        if (curr->content > curr->next->content)
            return (1);
        curr = curr->next;
    }
    return (0);
}

void sort_three(t_list **alst, t_lstmove **mlst)
{
    t_list *frst;
    t_list *scnd;
    t_list *thrd;

    frst = *alst;
    scnd = frst->next;
    thrd = scnd->next;
    if (is_sorted(alst) == 0)
        return ;
    else if (pos_lowest(alst) == 0 && scnd->content > thrd->content)
        {
            swap_a(alst, mlst);
            rot_a(alst, mlst);
        }
    if (pos_lowest(alst) == 1 && frst->content > thrd->content)
        rot_a(alst, mlst);
    if (pos_lowest(alst) == 1 && frst->content < thrd->content)
        swap_a(alst, mlst);
    if (pos_lowest(alst) == 2 && frst->content < scnd->content)
        revrot_a(alst, mlst);
    if (pos_lowest(alst) == 2 && frst->content > scnd->content)
    {
        swap_a(alst,mlst);
        revrot_a(alst, mlst);
    }
}



void push_lowest_to_b(t_list **alst, t_list **blst, t_lstmove **mlst)
{
    int pos;
    int size;

    pos = pos_lowest(alst);
    size = ft_lstsize(*alst);
    if (pos < size / 2)
        while (pos)
        {
            rot_a(alst, mlst);
            pos--;
        }
    else
        while (size - pos)
        {
            revrot_a(alst, mlst);
            pos++;
        }
    push_b(alst, blst, mlst);
}

void sort_four(t_list **alst, t_list **blst, t_lstmove **mlst)
{
    push_lowest_to_b(alst, blst, mlst);
    sort_three(alst, mlst);
    push_a(alst, blst, mlst);
}

void    sort_five(t_list **alst, t_list **blst, t_lstmove **mlst)
{
    push_lowest_to_b(alst, blst, mlst);
    push_lowest_to_b(alst, blst, mlst);
    sort_three(alst, mlst);
    push_a(alst, blst, mlst);
    push_a(alst, blst, mlst);
}
