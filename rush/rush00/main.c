/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 02:27:10 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/02 17:18:03 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] == '\t' || str[i] == '\n') || (str[i] == '\r' ||
				str[i] == '\v') || (str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * negative);
}

int		main(int argc, char **argv)
{
	if (ft_atoi(argv[1]) <= 0 || ft_atoi(argv[2]) <= 0)
	{
		write(1, "Please, use greater than 0 values.\n", 35);
		return (0);
	}
	if (argc != 3)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
