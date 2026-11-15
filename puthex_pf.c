/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:17:53 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/14 18:12:09 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthex_pf(unsigned long n, char upplower)
{
	int		count;
	char	*base;

	count = 0;
	if (upplower == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count = puthex_pf(n / 16, upplower) + count;
	putchar_pf(base[n % 16]);
	count++;
	return (count);
}
