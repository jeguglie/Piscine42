/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:09:41 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 20:00:04 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_args(char **argv)
{
	int i;
	int j;
	int c;

	c = 0;
	i = 0;
	j = 1;
	while (argv[j])
	{
		while (argv[j][i])
		{
			if ((argv[j][i] > 57 && argv[j][i] < 49 && argv[j][i] != 46))
			{
				return (0);
			}
			c++;
			i++;
		}
		j++;
		i = 0;
	}
	if (c != 81)
		return (0);
	return (1);
}

// Check la taille totale des arguments (Si different de 81 retourne 0)
// Si les arguments comprennent autre chose que de 0 a 9 et '.' retourne 0
// Retourne 1 si aucune erreur est détectée