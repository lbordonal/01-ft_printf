/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:32:04 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/16 18:32:10 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int	type_check(va_list args, const char type)
{
	int	length;

	length = 0;
	if (type == 'c')
		length += ft_putchar_count(va_arg(args, int));
	else if (type == 's')
		length += ft_putstr_count(va_arg(args, char *));
	else if (type == 'p')
		length += ft_putptr_count(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		length += ft_putnbr_count(va_arg(args, int));
/* 	else if (type == 'u')
		length += ft_put_unsignedint_count(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		length += ft_puthex_count(va_arg(args, unsigned int), type); */
	else if (type == '%')
		length += ft_putpercent();
	return (length);
}

int	ft_putchar_count(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_count(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "null", 4);
		return (4);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr_count(unsigned long long ptr)
{
	int len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 2);
	else
	{
		ft_putptr(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}

int	ft_putnbr_count(int n)
{
	int	len;
	char	*number;

	len = 0;
	number = ft_itoa(n);
	len = ft_putstr_count(number);
	free(number);
	return (len);
}

/*int	ft_put_unsignedint_count(unsigned int n)
{

}

int	ft_puthex_count(unsigned int n)
{

} */

int	ft_putpercent(void)
{
	write(1, "%", 1);
	return (1);
}

/*Funcoes auxiliares para ft_putptr_count:*/
int	ft_ptrlen(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
		ft_putchar_fd((n + '0'), 1);
		ft_putchar_fd((n - 10 + 'a'), 1);
	}
}
