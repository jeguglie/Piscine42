/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:58:12 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/03 17:06:06 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int b;

	(void)argc;
	i = 1;
	b = 0;
	while (argv[i])
	{
		while (argv[i][b])
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		i++;
		b = 0;
		ft_putchar('\n');
	}
	return (0);
}
