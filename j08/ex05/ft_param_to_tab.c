/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:32:41 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/12 16:46:30 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int i;
	int len;

	i = -1;
	len = 0;
	while (str[++i])
		len++;
	return (len);
}

char					*ft_strdup(char *str)
{
	char	*tab;
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (!(tab = (char *)malloc(sizeof(*tab) * i + 1)))
		return (0);
	i = -1;
	while (str[++i])
		tab[i] = str[i];
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*params;
	int			i;

	i = -1;
	if (!(params = (t_stock_par *)malloc(sizeof(*params) * (ac + 1))))
		return (0);
	while (++i < ac)
	{
		params[i].size_params = ft_strlen(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strdup(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
	}
	params[i].str = 0;
	return (params);
}
