/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:44:11 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/17 18:06:21 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *n_tab;

	if (!(n_tab = (int *)malloc(sizeof(*n_tab) * (lenght))))
		return (0);
	i = -1;
	while (++i < lenght)
		n_tab[i] = (*f)(tab[i]);
	return (n_tab);
}
