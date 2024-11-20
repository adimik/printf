/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:37:19 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/20 11:37:49 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(long n)
{
	char *symbols = "0123456789abcdef";
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
		i += ft_print_x(n / 16);
		i += ft_print_x(n % 16);
	}
	return (i);
}
