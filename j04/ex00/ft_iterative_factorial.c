/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 03:09:13 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/04 05:53:17 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int nbr;

	i = 1;
	nbr = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nbr > i)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
