/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_squares_down.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:26:53 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:34:52 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		copy_square_down(char **tab, int count);

int		check_squares_down(char **tab)
{
	int	count;

	count = 0;
	while (++count < 4)
	{
		if (!(copy_square_down(tab, count * 3)))
			return (0);
	}
	return (1);
}

// Cette fonction envoie a copy_square_down la limite d'index maximum pour la copie.
