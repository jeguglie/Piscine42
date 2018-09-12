/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:41:08 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 04:54:57 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		copy_square_top(char **tab, int count);

void 	ft_putchar(char c)
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

int     check_vertically(char **tab)
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

int		check_square(char *tab)
{
	int i;
	int j;

	j = 0;
	i = j + 1;
	while (tab[j])
	{
		while (tab[i])
		{
			if (tab[j] == tab[i] && (tab[j] >= '0' && tab[i] <= '9'))
				return (0);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
}

int		copy_square_top(char **tab, int count)
{
	char	*concat;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = -1;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	if (count > 4)
		k = count - 4;
	while (++j < 3)
	{
		while (++k < count)
			concat[i++] = tab[j][k];
		count > 4 ? (k = count - 4) : (k = -1);
	}
	concat[i] = '\0';
	if (!(check_square(concat)))
		return (0);
	free(concat);
	return (1);
}

int             copy_square_middle(char **tab, int count)
{
	char    *concat;
	int             i;
	int             j;
	int             k;

	i = 0;
	j = 2;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	if (count > 4)
		k = count - 4;
	while (++j < 6)
	{
		while (++k < count)
			concat[i++] = tab[j][k];
		count > 4 ? (k = count - 4) : (k = -1);
	}
	concat[i] = '\0';
	if (!(check_square(concat)))
		return (0);
	free(concat);
	return (1);
}

int             copy_square_down(char **tab, int count)
{
	char    *concat;
	int             i;
	int             j;
	int             k;

	i = 0;
	j = 5;
	k = -1;
	if (!(concat = (char *)malloc(sizeof(*concat) * (9))))
		return (0);
	if (count > 4)
		k = count - 4;
	while (++j < 9)
	{
		while (++k < count)
			concat[i++] = tab[j][k];
		count > 4 ? (k = count - 4) : (k = -1);
	}
	concat[i] = '\0';
	if (!(check_square(concat)))
		return (0);
	free(concat);
	return (1);
}

int		check_squares_down(char **tab)
{
	int	count;
	int count2;
	int squarenumber;

	count = 0;
	count2 = 1;
	squarenumber = 1;
	while (++count < 4)
	{
		if (!(copy_square_down(tab, count * 3)))
		{
			printf("%s%d%s\n", "ERROR : Square ",squarenumber,  " contain the same number.");
			squarenumber++;
			return (0);
		}
	}
	return (0);
}

int		check_squares_middle(char **tab)
{
	int	count;
	int count2;
	int squarenumber;

	count = 0;
	count2 = 1;
	squarenumber = 1;
	while (++count < 4)
	{
		if (!(copy_square_middle(tab, count * 3)))
		{
			printf("%s%d%s\n", "ERROR : Square ",squarenumber,  " contain the same number.");
			squarenumber++;
			return (0);
		}
	}
	return (0);
}

int             check_squares_top(char **tab)
{
	int	count;
	int count2;
	int squarenumber;

	count = 0;
	count2 = 1;
	squarenumber = 1;
	while (++count < 4)
	{
		if (!(copy_square_top(tab, count * 3)))
		{
			printf("%s%d%s\n", "ERROR : Square ",squarenumber,  " contain the same number.");
			squarenumber++;
			return (0);
		}
	}
	return (0);
}

int		launch_check(char **argv, char **tab, int c)
{
	if (!(check_vertically(argv)))
	{
		printf("%s\n", "ERROR : Same number on the same column.");
		return (0);
	}
	while (++c < 9)
		if (!(check_horizontally(argv[c])))
		{
			printf("%s\n", "ERROR : Same number on the same line.");
			return (0);
		}
	if (!(check_squares_top(tab) || check_squares_middle(tab) || check_squares_down(tab)))
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		c;
	int		j;
	int		i;

	c = -1;
	if (!(tab = (char **)malloc(sizeof(*tab) * (9))))
		return (0);
	while (++c < 9)
	{	
		if (!(tab[c] = (char *)malloc(sizeof(**tab) * (9))))
			return (0);
	}
	c = 0;
	j = 0;
	i = -1;
	if (argc != 10)
		write (1, "ERROR\n", 6);
	while (argv[++j] && argc == 10)
	{
		while (argv[j][++i])
			tab[c][i] = argv[j][i];
		tab[c][i] = '\0';
		print_sudoku(argv[j]);
		i = -1;
		c++;
	}
	if (!(launch_check(argv, tab, 0)))
		printf("%s\n", "FINAL ERROR");
	return (0);
}
