/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_horizontally.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:26:21 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:29:23 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_horizontally(char *tab)
{
	int i;
	int j;

	j = -1;
	i = j + 1;
	while (tab[++j])
	{
		while (tab[++i])
		{
			if (tab[j] == tab[i] && (tab[j] >= '0' && tab[i] <= '9'))
				return (0);
		}
		i = j + 1;
	}
	return (1);
}

// Check si le meme nombre est présent horizontalement.
// Retourne 1 si elle trouve aucune erreur.