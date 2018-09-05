/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:15:11 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/03 03:41:03 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[k] && j < nb)
	{
		dest[i] = src[k];
		k++;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
