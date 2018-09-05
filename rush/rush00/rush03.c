/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 23:12:51 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/02 16:44:56 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		if (i >= 2 && i < x)
			ft_putchar('B');
		if (i == x && x != 1)
			ft_putchar('C');
		i++;
	}
}

void	ft_middle(int x, int y)
{
	int k;
	int j;

	k = 1;
	j = 1;
	while (k < y - 1)
	{
		while (j <= x)
		{
			if (j == 1)
				ft_putchar('B');
			if (j >= 2 && j < x)
				ft_putchar(' ');
			if (j == x && x != 1)
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		k++;
		j = 1;
	}
}

void	ft_down(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		if (i >= 2 && i < x)
			ft_putchar('B');
		if (i == x && x != 1)
			ft_putchar('C');
		i++;
	}
}

int		rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	else if (x <= 0 || y <= 0)
		return (0);
	if (y == 1)
	{
		ft_top(x);
		ft_putchar('\n');
		return (0);
	}
	ft_top(x);
	ft_putchar('\n');
	ft_middle(x, y);
	ft_down(x);
	ft_putchar('\n');
	return (0);
}
