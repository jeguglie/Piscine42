/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 16:14:57 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/02 17:18:11 by jeguglie         ###   ########.fr       */
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
			ft_putchar('o');
		if (i >= 2 && i < x)
			ft_putchar('-');
		if (i == x && x != 1)
			ft_putchar('o');
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
				ft_putchar('|');
			if (j >= 2 && j < x)
				ft_putchar(' ');
			if (j == x && x != 1)
				ft_putchar('|');
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
			ft_putchar('o');
		if (i >= 2 && i < x)
			ft_putchar('-');
		if (i == x && x != 1)
			ft_putchar('o');
		i++;
	}
}

int		rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
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
