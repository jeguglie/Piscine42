/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 04:26:53 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/05 04:39:29 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max)
{
	int *tab;
	
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min - 1))))
		return (0);
	return (tab);
}
