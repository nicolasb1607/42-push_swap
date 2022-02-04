/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_function.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:38:30 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/04 21:28:48 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_FUNCTION_H

# define MOVE_FUNCTION_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "./push_swap.h"

void	add_move(t_lstmove **movelst, char *move);
void	read_mlst(t_lstmove **mlst);

#endif