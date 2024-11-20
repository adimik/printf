/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:31:28 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/20 11:33:32 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		i += ft_print_c(n + '0');
	}
	else
	{
		i +=ft_print_d(n / 10);
		i +=ft_print_d(n % 10);
	}
	return(i);
}
