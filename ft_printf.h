/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:12:19 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/15 16:26:14 by jaboulka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	putnbr_pf(int n);
int	putchar_pf(char c);
int	putstr_pf(char *s);
int	puthex_pf(unsigned long n, char upplower);
int	putptr_pf(void *ptr);
int	putunsinbr_pf(unsigned int n);
int	ft_printf(const char *format, ...);
#endif