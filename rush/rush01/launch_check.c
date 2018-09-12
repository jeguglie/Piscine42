/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 04:04:47 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 19:05:21 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_squares_top(char **tab);
int		check_squares_middle(char **tab);
int		check_squares_down(char **tab);
int		check_vertically(char **tab);
int		check_horizontally(char *tab);

int		launch_check(char **tab)
{
	int	c;

	c = -1;
	if (check_vertically(tab) == 0) // Si check _vertically renvoie 0 > ERREUR.
		return (0);
	while (++c < 9) // On check ligne par ligne (index par index)
	{
		if (check_horizontally(tab[c]) == 0) // Si check _horizontally renvoie 0 > ERREUR.
			return (0);
	}
	if (check_squares_top(tab) == 0 || check_squares_middle(tab) == 0 ||
		check_squares_down(tab) == 0) // Check des carrés du haut, milieu et bas. Renvoie 0 en cas d'ERREUR.
		return (0);
	return (1); //>>> SI tout s'est bien passé (aucun return 0, la fonction renvoie 1 car aucune erreur a été détectée.
}
