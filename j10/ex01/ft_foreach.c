/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:06:21 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/17 14:48:02 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if  (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = -1;
	while (++i < length) 
		(*f)(tab[i]);
}

int		main(void)
{
	int tab[10] = {1, 2, 4, 5, 6, 5, 6, 1, 2, 3};
	
	ft_foreach(tab, 10, &ft_putnbr);
	
	return (0);
}
