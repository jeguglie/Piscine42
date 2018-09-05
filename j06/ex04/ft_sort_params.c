/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 03:51:58 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/04 04:33:13 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && (s1[i] != '\0' && s2[j] != '\0'))
	{
		i++;
		j++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		i--;
		j--;
	}
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] > s2[j])
		return (s1[i] - s2[j]);
	if (s1[i] < s2[j])
		return (s1[i] - s2[j]);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	int		b;
	int		c;
	char	*temp;

	b = 0;
	i = 0;
	c = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = 0;
		}
	}
	while (++c < argc)
	{
		ft_putstr(&argv[c][b]);
		b = 0;
	}
	return (0);
}
