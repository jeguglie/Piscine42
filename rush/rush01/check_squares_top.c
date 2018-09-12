/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_squares_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 04:11:49 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:33:59 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		copy_square_top(char **tab, int count);

int		check_squares_top(char **tab)
{
	int	count;

	count = 0;
	while (++count < 4)
	{
		if (!(copy_square_top(tab, count * 3)))
			return (0);
	}
	return (1);
}
// Cette fonction envoie a copy_square_down la limite d'index maximum pour la copie.
