/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vertically.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:27:37 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:27:40 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_vertically(char **tab)
{
	int a;
	int c;
	int i;

	a = -1;
	c = -1;
	i = c + 1;
	while (++a < 9)
	{
		while (++c < 9)
		{
			while (++i < 9)
			{
				if (tab[c][a] == tab[i][a] &&
						(tab[c][a] >= '0' && tab[i][a] <= '9'))
					return (0);
			}
			i = c + 1;
		}
		c = 0;
	}
	return (1);
}

// Check si le meme nombre est present sur la meme colonne.
// Retourne 1 si elle trouve aucune erreur.