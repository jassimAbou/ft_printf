/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 18:25:12 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/15 16:27:21 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ifs_and_elses(const char *format, va_list args, int i)
{
	int	count;

	count = 0;
	if (format[i + 1] == 'p')
		count = putptr_pf(va_arg(args, void *)) + count;
	else if (format[i + 1] == 'c')
		count = putchar_pf(va_arg(args, int)) + count;
	else if (format[i + 1] == 's')
		count = putstr_pf(va_arg(args, char *)) + count;
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		count = putnbr_pf(va_arg(args, int)) + count;
	else if (format[i + 1] == 'u')
		count = putunsinbr_pf(va_arg(args, unsigned int)) + count;
	else if (format[i + 1] == 'x')
		count = puthex_pf(va_arg(args, unsigned int), 'x') + count;
	else if (format[i + 1] == 'X')
		count = puthex_pf(va_arg(args, unsigned int), 'X') + count;
	else if (format[i + 1] == '%')
		count = putchar_pf('%') + count;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count = ifs_and_elses(format, args, i) + count;
			i = i + 2;
		}
		else
		{
			count = putchar_pf(format[i]) + count;
			i++;
		}
	}
	va_end(args);
	return (count);
}
