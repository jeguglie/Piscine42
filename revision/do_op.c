/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeguglie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:44:13 by jeguglie          #+#    #+#             */
/*   Updated: 2018/09/14 16:15:34 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

long		mod(long a, long b)
{
	return (a % b);
}

long		divider(long a, long b)
{
	return (a / b);
}

long		multiple(long a, long b)
{
	return (a * b);
}

long 	add(long a, long b)
{
	return (a + b);
}

long		soustract(long a, long b)
{
	return (a - b);	
}

long  do_op(int a, char o, int b)
{
	long a_nbr = a;
	long b_nbr = b;

	if (o == '-')
		return (printf("%ld\n", soustract(a, b)));
	if (o == '+')
		return (printf("%ld\n", add(a, b)));
	if (o == '*')
		return (printf("%ld\n", multiple(a, b)));
	if (o == '/')
		return (printf("%ld\n", divider(a, b)));
	if (o == '%')
		return (printf("%ld\n", mod(a, b)));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] != '*' && argv[2][0] != '-'  && argv[2][0] != '/' && argv[2][0] != '%' && argv[2][0] != '+') 
		return (0);
	do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));	
	return (0);
}
