/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaboulka <jaboulka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:12:19 by jaboulka          #+#    #+#             */
/*   Updated: 2026/11/14 19:57:51 by jaboulka         ###   ########.fr       */
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
int	ft_printf(const char *, ...);
#endif