/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:47:01 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/10 20:53:38 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_copy(int argc, char **argv, char *tab)
{
	int j;
	int k;
	int i;

	i = -1;
	k = -1;
	j = 1;
	while (j < argc)
	{
		while (argv[j][++i])
			tab[++k] = argv[j][i];
		tab[++k] = '\n';
		i = -1;
		j++;
	}
	tab[k] = '\0';
	return (tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		j;
	int		len;
	char	*tab;

	j = 0;
	len = -1 + argc;
	while (argv[++j])
		len = len + ft_strlen(argv[j]);
	if (!(tab = (char *)malloc(sizeof(*tab) * (len))))
		return (0);
	return (ft_copy(argc, argv, tab));
}
