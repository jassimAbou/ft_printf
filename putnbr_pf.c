/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:06:18 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/14 16:23:23 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_pf(int n)
{
	long	a;
	int		count;

	a = (long)n;
	count = 0;
	if (a < 0)
	{
		putchar_pf('-');
		a = -a;
		count++;
	}
	if (a > 9)
		count = putnbr_pf(a / 10) + count;
	putchar_pf(a % 10 + '0');
	count++;
	return (count);
}
