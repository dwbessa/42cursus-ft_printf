/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:59 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/18 17:09:28 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int	d;
	char	c;
	char		*s;

	va_start(ap, fmt);
	while (*fmt)
		switch (*fmt++) {
		case 's':              /* string */
			s = va_arg(ap, char *);
			printf("string %s\n", s);
		break;
		case 'd':              /* int */
			d = va_arg(ap, int);
			printf("int %d\n", d);
			break;
		case 'c':              /* char */
                   /* need a cast here since va_arg only
                      takes fully promoted types */
			c = (char) va_arg(ap, int);
			printf("char %c\n", c);
			break;
		}
	va_end(ap);
}
