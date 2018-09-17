/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:01:13 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/17 18:10:22 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int c;

	i = -1;
	c = 0;
	while (tab[++i])
		if((*f)(tab[i]))
			c++;
	return (c);
}

int		main(void)
{
	char  **tab;

	tab = (char **)malloc(sizeof(*tab) * 4);
	tab[0]  = (char *)malloc(sizeof(tab[0]) * 4);
	tab[1]  = (char *)malloc(sizeof(tab[0]) * 4);
	tab[2]  = (char *)malloc(sizeof(tab[0]) * 4);
	tab[3] = 0;
	tab[0][0] = 'a';
	tab[0][1] = 'a';
	tab[0][2] = 'a';
	tab[0][3] = 'a';
	tab[1][0] = 'a';
	tab[1][1] = 'a';
	tab[1][2] = 'a';
	tab[1][3] = 'a';
	tab[2][0] = '1';
	tab[2][1] = 'a';
	tab[2][2] = 'a';
	tab[2][3] = 'a';

	printf("%d\n", ft_count_if(tab, &count_elements));
	return (0);
}
