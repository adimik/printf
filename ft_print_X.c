/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:38:31 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/20 11:39:03 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_X(long n)
{
	char *symbols = "0123456789ABCDEF";
	int	i;
	
	i = 0;
	if (n < 0)
	{
		i += ft_print_c('-');
		n = -n;	
	}
	if (n < 17)
		i += ft_print_c(symbols[n]);
	else
	{
		i += ft_print_X(n / 16);
		i += ft_print_X(n % 16);
	}
	return (i);
}
