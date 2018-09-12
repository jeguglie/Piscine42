/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:28:17 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/10 18:43:57 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = -1;
	words = 0;
	while (str[++i])
		if (((str[i] >= 33 && str[i] <= 126) && (str[i - 1] == ' ' ||
						str[i - 1] == '\n' || str[i - 1] == '\t')) ||
				(i == 0 && str[i] >= 33 && str[i] <= 126))
			words++;
	return (words);
}

int		words_len(char *str, int j)
{
	int i;
	int len;
	int c;

	i = 0;
	len = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		c++;
		while ((str[i] != ' ' && str[i] != '\n') && (str[i] != '\t' && str[i]))
		{
			i++;
			len++;
		}
		if (c == j)
			return (len);
		len = 0;
	}
	return (len);
}

char	**ft_bomb(char **tab, char *str)
{
	int j;
	int i;
	int c;

	j = -1;
	i = 0;
	c = 0;
	while (++j < ft_count_words(str))
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && (str[i]))
		{
			tab[j][c] = str[i];
			c++;
			i++;
		}
		tab[j][c] = '\0';
		c = 0;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		j;

	j = -1;
	if (!(tab = malloc(sizeof(*tab) * (ft_count_words(str) + 1))))
		return (0);
	while (++j < ft_count_words(str))
		if (!(tab[j] = malloc(sizeof(tab[j]) * (words_len(str, j) + 1))))
			return (0);
	return (ft_bomb(tab, str));
}
