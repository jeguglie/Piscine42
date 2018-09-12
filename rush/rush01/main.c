/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:28:03 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/09 19:58:05 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
// Prototypes des fonctions
void	print_sudoku(char *tab); // Affiche le sudoku
int		check_square(char *tab); // Verifie si un meme nombre est présent dans un carré.
int		copy_square_top(char **tab, int count); // Copie les 3 carrés(top) et les renvoies sur la fonction check_square
int		copy_square_middle(char **tab, int count); // Copie les 3 carrés(milieu) et les renvoies sur la fonction check_square
int		copy_square_down(char **tab, int count); v // Copie les 3 carrés(bas) et les renvoies sur la fonction check_square
int		launch_check(char **tab, int c); // Lancement du check vertical, horizontal, et des 9 carrés.
int		check_args(char **argv); // Lancement du check des arguments (Protection du programme)

char	**start_sudoku(int argc, char **argv, int c, int i)
{
	char	**tab; // Declaration d'un double tableau pour pouvoir stocker les arguments reçus.
	int		j;

	j = 0;
	if (!(tab = (char **)malloc(sizeof(*tab) * (9)))) // Allocation d'un tableau de 9 case pour stocker les 9 lignes
		return (0);
	while (++c < 9) // Index de la ligne 
		if (!(tab[c] = (char *)malloc(sizeof(**tab) * (9)))) // Allocation d'un tableau de 9 cases pour chaques lignes.
			return (0); // Si malloc echoue, le programme retourne 0;
	c = 0;
	if (argc != 10) // Si le nombre d'arguments est different de 10 (le programme retourne une erreur).
	{
		write(1, "ERROR : Invalid(s) arg(s).\n", 28);
		return (0);
	}
	while (argv[++j] && argc == 10) // COPIE DES ARGUMENTS DANS LE TABLEAU PRECEDEMMENT CREEE.
	{
		while (argv[j][++i])
			tab[c][i] = argv[j][i]; // On copie chaue arguments dans chaque index du tableau. 
		tab[c][i] = '\0';
		i = -1;
		c++;
	}
	return (tab); // On retourne le tableau final.
}

char	**back_sudoku(char **tab, int pos)
{
	int		i;
	int		j;
	char	num;

	i = pos / 9;
	j = pos % 9;
	if (pos == 81)
		return (tab);
	if (tab[i][j] != 46)
		return (back_sudoku(tab, pos + 1));
	num = 48;                                              // Recursive inachevée, aucun résultat avec.
	while (++num <= 57)
	{
		if (launch_check(tab, 0))
		{
			tab[i][j] = num;
			if (back_sudoku(tab, pos + 1))
				return (back_sudoku(tab, pos + 1));
		}
	}
	tab[i][j] = 46;
	return (NULL);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		c;

	if (!(check_args(argv)))  // Si check_args retourne 0 (en cas d'erreur dans les arguments)
	{
		write(1, "ERROR : Invalid(s) arg(s).\n", 28);
		return (0); // Le programme s'arrête.
	}
	c = -1;
	if (!(tab = start_sudoku(argc, argv, -1, -1))) // On assigne le tableau TAB renvoyé par start_sudoku.
		return (0); // Le programme s'arrête si tab n'existe pas.
	if (launch_check(tab, -1) != 1) // Lancement des fonctions CHECK, si une d'entre elles renvoie 0 alors le programme s'arrête.
	{
		write(1, "LAUNCH CHECK : Same number.\n", 28);
		return (0);
	}
	back_sudoku(tab, 0); // Lancement de la récursive avec le tableau créée par start_sudoku
	while (++c < 9)
		print_sudoku(tab[c]); // Affichage de la grille de sudoku.
	return (0);
}
