/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:16:23 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/19 12:58:19 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putptr_pf(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		putstr_pf("(nil)");
		return (5);
	}
	putstr_pf("0x");
	count = 2;
	count = puthex_pf((unsigned long)ptr, 'x') + count;
	return (count);
}
