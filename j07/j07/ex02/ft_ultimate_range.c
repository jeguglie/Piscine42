/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 07:30:47 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/05 13:43:55 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;
	int		nb;

	nb = min;
	i = 0;
	if (min >= max)
		range = 0;
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (nb < max)
	{
		tab[i] = nb;
		nb++;
		i++;
	}
	return (max - min);
}
