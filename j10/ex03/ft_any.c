/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:39:47 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/17 18:07:52 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		search_one(char *tab)
{
	int i;

	i = -1;
	while (tab[++i])
		if (tab[i] == '1')
			return (1);
	return (0);	
}

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i])
		if ((*f)(tab[i]))
			return (1);
	return (0);

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

	printf("%d\n", ft_any(tab, &search_one));
	return (0);
}
