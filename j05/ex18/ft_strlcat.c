/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 00:12:08 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/03 05:20:54 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	i;
	unsigned	k;
	unsigned	j;
	int			o;
	int			b;

	i = ft_strlen(dest);
	k = 0;
	j = 0;
	o = ft_strlen(dest);
	b = ft_strlen(src);
	while (src[k] != '\0' && j < size)
	{
		dest[i] = src[k];
		k++;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (o + b);
}
