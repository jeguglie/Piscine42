/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:28:17 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/06 17:52:29 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int			ft_count_words(char *str)
{
	int i;
	int words;

	i = -1;
	words = 0;
	while (str[++i])
		if (((str[i] >= 33 && str[i] <= 126) && (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')) ||
				(i == 0 && str[i] >= 33 && str[i] <= 126))
			words++;
	return (words);
}

int		ft_words_len(char *str, int len)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while ((str[i] != ' ' || str[i] != '\n' || str[i] != '\t') && (str[i] != '\0'))
		{
			i++;
			len++;
		}
	}
	return (len);
}

char		**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int j;
	int c;

	i = -1;
	j = 0;
	c = 0;
	if (!(tab = (char **)malloc(sizeof(**tab) * (ft_count_words(str) + 1))))
		return (0);
	while (j < ft_count_words(str))
	{	
		if (!(tab[j] = (char *)malloc(sizeof(*tab[j]) * (ft_words_len(str, 0) + 1))))
			return (0);
		j++;
	}
	j = 0;
	while (j < ft_count_words(str))
	{	
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while ((str[i] != ' ' || str[i] != '\n' || str[i] != '\t') && (str[i] != '\0'))
		{	
			tab[j][c] = str[i];
			c++;
			i++;
			printf("%c", tab[j][c]);
		}
		tab[j][c] = '\0';
		j++;
		c = 0;
	}
	printf("%c", tab[0][0]);
	return (tab);
}

int 	main()
{
	ft_split_whitespaces("alourfffff");
	return (0);
}
