/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:22:08 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/11 16:52:06 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H

# define CHECK_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int	check(t_list **alst);
int	check_arg(char **av);


#endif