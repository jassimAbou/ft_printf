/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:16:33 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/14 17:21:16 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr_pf(char *s)
{
	int	count;

	count = 0;
	if (!s)
		s = "(null)";
	while (s[count] != '\0')
	{
		putchar_pf(s[count]);
		count++;
	}
	return (count);
}
