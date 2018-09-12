/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_square_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:17 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 12:36:03 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_square(char *tab);

int		copy_square_down(char **tab, int count)
{
	char	*concat;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 5;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	if (count > 4)
		k = count - 4;
	while (++j < 9)
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

// La fonction copy square copie le block 1, 2 et 3 du bas du sudoku.
// Elle copie un block dans une chaine de caractère (concat)
// Elle lance check_square(concat) pour verifier si deux nombres sont présents deux fois dans le carrés