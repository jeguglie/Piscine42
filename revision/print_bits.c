/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:17:31 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/14 16:51:19 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int z;

	z = 128;
	while (z > 0)
	{
		if (z & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		z >>= 1;
	}
}

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

unsigned char reverse_bits(unsigned char b)
{
	unsigned char    r = 0;
	unsigned        byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
