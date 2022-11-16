/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:42:59 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/16 18:17:02 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>
# include <ctype.h>
# include <stdarg.h>
# include <stdint.h>

/*ft_printf.c:*/
int		ft_printf(const char *input, ...);

/* ft_printf_utils.c:*/
int		type_check(va_list args, const char type);
int		ft_putchar_count(int c);
int		ft_putstr_count(char *str);
int		ft_putptr_count(unsigned long long ptr);
int		ft_putnbr_count(int n);
int		ft_put_unsignedint_count(unsigned int n);
int		ft_puthex_count(unsigned int n);
int		ft_putpercent(void);
void	ft_putptr(uintptr_t number)
int		ft_ptrlen(uintptr_t number)

#endif
