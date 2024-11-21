/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimik <adimik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:37:19 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/21 13:19:17 by adimik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long int n)
{
	char *symbols = "0123456789abcdef";
	int	i;
	
	i = 0;
	if (n < 16)
		i += ft_print_c(symbols[n]);
	else
	{
		i += ft_print_x(n / 16);
		i += ft_print_x(n % 16);
	}
	return (i);
}
