/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 00:03:53 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/02 04:01:57 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	while (str[i])
	{
		if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if (((str[i - 1] <= 64 && str[i - 1] >= 58) ||
					(str[i - 1] <= 47 && str[i - 1] >= 0) ||
					(str[i - 1] >= 91 && str[i - 1] <= 96) ||
					(str[i - 1] >= 123 && str[i - 1] <= 127)) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
