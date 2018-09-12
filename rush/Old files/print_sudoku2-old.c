/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:41:08 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 00:16:05 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(char *tab)
{
	int i;

	i = -1;
	while (tab[++i])
	{
		ft_putchar(tab[i]);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}

int		check_horizontally(char *tab)
{
	int i;
	int j;

	j = -1;
	i = j + 1;
	while (tab[++j])
	{
		while (tab[++i])
		{
			if (tab[j] == tab[i] && (tab[j] >= '0' && tab[i] <= '9'))
				return (0);
		}
		i = j + 1;
	}
	return (1);
}

int		check_vertically(char **tab)
{
	int a;
	int c;
	int i;

	a = -1;
	c = -1;
	i = c + 1;
	while (++a < 9)
	{
		while (++c < 9)
		{
			while (++i < 9)
			{
				if (tab[c][a] == tab[i][a] &&
						(tab[c][a] >= '0' && tab[i][a] <= '9'))
					return (0);
			}
			i = c + 1;
		}
		c = 0;
	}
	return (1);
}

int		copy_square(char **tab)
{
	char	*concat;
	int		i;
	int		j;
	int		k;
	
	i = -1;
	j = 0;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	while (++j != 3)
		while (++k != 2)	
			concat[++i] = tab[j][k];
	concat[i] = '\0';
	printf("%s", concat);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		c;
	int		j;

	i = -1;
	c = -1;
	j = 0;
	if (argc != 10)
		write(1, "ERROR\n", 6);
	while (argv[++j] && argc == 10)
		print_sudoku(argv[j]);
	if (!(check_vertically(argv)))
		printf("%s\n", "ERROR : Same number on the same column.");
	while (++c < 9)
		if (!(check_horizontally(argv[c])))
			printf("%s\n", "ERROR : Same number on the same line.");
	copy_square(argv);
	return (0);
}
