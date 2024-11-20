/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:30:11 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/20 13:24:07 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_print_d(long long n);
int ft_print_c(int c);
int	ft_print_s(char *c);
int	ft_print_x(long n);
int	ft_print_X(long n);
int	ft_print_p(void *p);
int	ft_print_u(unsigned int i);
int	ft_printf(const char *str, ...);
int	ft_symbols(const char *c, va_list arg);

#endif
