/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:47:01 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/05 19:35:23 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*tab;

	i = 0;
	j = 0;
	k = 0;
	len = -1 + argc;
	while (argv[++j])
		len = len + ft_strlen(argv[j]);
	if (!(tab = (char *)malloc(sizeof(*tab) * (len))))
		return (0);
	j = 1;
	while (j < argc)
	{
		while (argv[j][i])
			tab[k++] = argv[j][i++];
		tab[k++] = '\n';
		j++;
		i = 0;
	}
	tab[--k] = '\0';
	return (tab);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return(0);
}
