/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 07:30:47 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/10 19:44:46 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		nb;

	nb = min;
	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(*range) * (1))))
		return (0);
	if (!(range[0] = (int *)malloc(sizeof(*range) * ((max - min)))))
		return (0);
	while (nb < max)
	{
		range[0][i] = nb;
		nb++;
		i++;
	}
	return (max - min);
}
