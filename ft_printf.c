/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:59 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/19 17:01:12 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			i;
	int			d;
	char		c;
	char		*s;

	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if ((fmt[i] == %) && (fmt[i + 1] == ft_strchr("cspdiuxX%", fmt[i + 1])))
		{
			va_arg(ap, check_argument(fmt[i + 1]));
		}

	}
	va_end(ap);
	return (
}

//	while (*fmt)
//		switch (*fmt++) {
//		case 's':              /* string */
//			s = va_arg(ap, char *);
//			printf("string %s\n", s);
//		break;
//		case 'd':              /* int */
//			d = va_arg(ap, int);
//			printf("int %d\n", d);
//			break;
//		case 'c':              /* char */
//                   /* need a cast here since va_arg only
//                      takes fully promoted types */
//			c = (char) va_arg(ap, int);
//			printf("char %c\n", c);
//			break;
//		}
//	va_end(ap);
//}
//
//
// c -> character   --------------------------------- putchar
// s -> string      --------------------------------- putstr
// p -> void pointer printed hexadecimal format ----- puthexa (?)
// d -> decimal base 10 number ---------------------- putnbr
// i -> integer base 10 ----------------------------- putnbr
// u -> unsigned decimal base 10 -------------------- put(unsign)nbr
// x -> hexadecimal lowercase ----------------------- puthexa
// X -> hexadecimal uppercase ----------------------- puthexa
// % -> prints percent sign ------------------------- putchar
