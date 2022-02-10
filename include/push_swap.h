/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:26 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 22:57:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

typedef struct s_init
{
	t_list *stack;
	t_list **head;
}	t_init;

typedef struct	s_lstmove
{
	char	*content;
	struct s_lstmove *next;
}	t_lstmove;

# include <unistd.h>
# include <stdlib.h>
# include "./parsing.h"
# include "../libft/libft.h"
# include "./swap_function.h"
# include "./push_function.h"
# include "./rotate_function.h"
# include "./rev_rotate_function.h"
# include "./check.h"
# include "./move_function.h"
# include "./sort_three.h"
# include "./sort_four.h"
# include "./sort_five.h"
# include "./dup_lst.h"
# include "./buble_sort.h"
# include "./radix_sort.h"

#endif