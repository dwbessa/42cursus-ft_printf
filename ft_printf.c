/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:59 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/19 18:59:50 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			ret;

	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if ((format[i] =='%') && (ft_strchr("cspdiuxX%", format[i + 1])))
		{
			ret += check_argument(format, i, ap);
			i++;
		}
		else
			ret += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (i);
}


int	main()
{
	ft_printf("Eu sou o Daniel %s e tenho %d anos e %umg. Meu endereço de memória é 0x%X. Tenho %d%% de bateria", "Bessa", 29, 4294967295, 123, 97);
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
