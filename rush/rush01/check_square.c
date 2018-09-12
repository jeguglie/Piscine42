/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:26:35 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:26:38 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_square(char *tab)
{
	int i;
	int j;

	j = 0;
	i = j + 1;
	while (tab[j])
	{
		while (tab[i])
		{
			if (tab[j] == tab[i] && (tab[j] >= '0' && tab[i] <= '9'))
				return (0);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
}

// Compare un element avec tout le reste de la chaine.
// Si aucun meme nombre est trouvé, cette fonction compare l'élement suivant avec le reste de la chaîne et ainsi de suite...