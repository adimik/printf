/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didimitr <didimitr@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:20:16 by didimitr          #+#    #+#             */
/*   Updated: 2024/11/20 13:21:30 by didimitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c;
	char	s[] = "Test";
	char	p[] = "Dalsi string ///aw";
	int		i;
	int		t;
	void *u;
	unsigned int q;
	
	t = 0;
	i = 1233423;
	c = 'A';
	u = &i;
	q = 46212786;	
	t = ft_printf("Hello world %c %s , a za timhle %s %X %% %p %u \n", c, s, p, i, u, q);
	ft_printf("%d\n", t);
	t = printf("Hello world %c %s , a za timhle %s %X %% %p %u \n", c, s, p, i, u, q);
	printf("%d\n", t);
	
	return(0);
}
