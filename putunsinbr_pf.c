/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunsinbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:43:11 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/15 16:06:01 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putunsinbr_pf(unsigned int n)
{
	int		count;

	count = 0;
	if (n > 9)
		count = putunsinbr_pf(n / 10) + count;
	putchar_pf(n % 10 + '0');
	count++;
	return (count);
}
