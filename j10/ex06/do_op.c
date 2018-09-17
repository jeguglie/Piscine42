/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 20:10:51 by exam              #+#    #+#             */
/*   Updated: 2018/09/17 22:04:50 by jeguglie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

void	do_op(long int a, char op, long int b)
{
	if (op == '+')
		ft_putnbr(a + b);
	if (op == '-')
		ft_putnbr(a - b);
	if (op == '*')
		ft_putnbr(a * b);
	if (op == '/')
	{
		if (a == 0 || b == 0)
		{
			write(1, "Stop : division by zero", 23);
			return ;
		}
		ft_putnbr(a / b);
	}
	if (op == '%')
	{
		if (a == 0 || b == 0)
		{
			write(1, "Stop : modulo by zero", 21);
			return ;
		}
		ft_putnbr(a % b);
	}
}
