/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adimik <adimik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:30:11 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/21 13:19:23 by adimik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_print_d(int n);
int ft_print_c(int c);
int	ft_print_s(char *c);
int	ft_print_x(unsigned long int n);
int	ft_print_X(long n);
int	ft_print_p(void *p);
int	ft_print_u(unsigned int i);
int	ft_printf(const char *str, ...);
int	ft_symbols(const char *c, va_list arg);

#endif
