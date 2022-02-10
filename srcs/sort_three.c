/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:27:09 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 16:34:52 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/sort_three.h"

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
    if (frst->content > scnd->content && frst->content < thrd->content)
        swap_a(alst, mlst);
    if (frst->content > scnd->content && frst->content > thrd->content)
    {
        if (scnd->content < thrd->content)
            rot_a(alst, mlst);
        else
        {
            swap_a(alst, mlst);
            revrot_a(alst, mlst);
        }
    }
}

void sort_four(t_list **alst, t_list **blst, t_lstmove **mlst)
{
    t_list *topa;
    t_list *topb;
    t_list *lasta;

    push_b(alst, blst, mlst);
    sort_three(alst, mlst);
    topb = *blst;
    topa = *alst;
    lasta = ft_lstlast(*alst);
    while (topb->content > topa->content || topb->content < lasta->content)
    {
        rot_a(alst, mlst);
        topa = *alst;
        lasta = ft_lstlast(*alst);
    }
    push_a(alst, blst, mlst);
    while (is_sorted(alst) == 1)
        rot_a(alst, mlst);
}

void sort_five(t_list **alst, t_list **blst, t_lstmove **mlst)
{