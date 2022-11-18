/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:57:43 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/18 15:58:24 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %d or %i: */
int	ft_putnbr_count(int n)
{
	int		len;
	char	*number;

	len = 0;
	number = ft_itoa(n);
	len = ft_putstr_count(number);
	free(number);
	return (len);
}

/* %u: */
/* int	ft_put_unsignedint_count(unsigned int n)
{

} */
