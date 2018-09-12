/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_square_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:37 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:28:39 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_square(char *tab);

int		copy_square_top(char **tab, int count)
{
	char	*concat;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = -1;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	if (count > 4)
		k = count - 4;
	while (++j < 3)
	{
		while (++k < count)
			concat[i++] = tab[j][k];
		if (count > 4)
			k = count - 4;
		else
			k = -1;
	}
	concat[i] = '\0';
	if (!(check_square(concat)))
		return (0);
	return (1);
}


// La fonction copy square copie le block 1, 2 et 3 du haut du sudoku.
// Elle copie un block dans une chaine de caractère (concat)
// Elle lance check_square(concat) pour verifier si deux nombres sont présents deux fois dans le carrés