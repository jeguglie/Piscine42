/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:11:17 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/17 18:27:00 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_after(int one, int two)
{
	if (one < two)
		return (-1);
	if (one == two)
		return (0);
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	
	i = -1;
	while (++i < length - 1)
		if ((*f)(tab[i], tab[i + 1]) == 1)
			return (0);
	return (1);
}

int		main(void)
{
	int tab[10] = {8, 8, 8, 8, 8, 8, 8, 8, 1, 242};

	printf("%d\n", ft_is_sort(tab, 10, &check_after));
	return (0);
}
