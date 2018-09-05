/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:07:16 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/03 03:16:53 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	i = 0;
	negative = 1;
	result = 0;
	while ((str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n') || (str[i] == '\r' ||
		str[i] == '\v') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * negative);
}
