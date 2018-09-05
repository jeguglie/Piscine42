/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:48:54 by jeguglie          #+#    #+#             */
/*   Updated: 2018/08/30 16:24:42 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int nb1, int nb2)
{
	ft_putchar('0' + nb1 / 10);
	ft_putchar('0' + nb1 % 10);
	ft_putchar(' ');
	ft_putchar('0' + nb2 / 10);
	ft_putchar('0' + nb2 % 10);
}

void	ft_print_comb2(void)
{
	int i;
	int nb1;
	int nb2;

	i = 1;
	while (i <= 9899)
	{
		nb1 = i / 100;
		nb2 = i % 100;
		if (nb1 < nb2)
		{
			if (i != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print(nb1, nb2);
		}
		i++;
	}
}
