/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:06:45 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/03 21:23:27 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;
	int c;

	i = 0;
	b = 0;
	c = 0;
	if (to_find == 0)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[b] && str[i] != '\0')
		{
			if (to_find[b + 1] == '\0')
				return (&str[(i - b)]);
			i++;
			b++;
		}
		i = i - b;
		b = 0;
		i++;
	}
	return (0);
}
