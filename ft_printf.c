/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:59 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/20 14:26:06 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			ret;
	int			result;

	i = 0;
	ret = 0;
	result = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if ((format[i] == '%') && (ft_strchr("cspdiuxX%", format[i + 1])))
		{
			ret += check_argument(format, i, ap);
			i++;
		}
		else
		{
			ret += ft_putchar(format[i]);
			ret++;
		}
		i++;
	}
	va_end(ap);
	return (ret);
}

//#include <stdio.h>
//int	main(void)
//{
//	int	x = 29;
//	int	*ptr = &x;
//	char str[] = "THE SKY IS BLUE";
//	ft_printf("Eu sou o Daniel, mas pode me chamar de %c. %s e tenho %d anos e %umg de peso. Minha idade em hexadecimal é %x ou %X. Tenho %i%% de bateria e o endereço de memória da minha idade é %p. Obrigado por ler até aqui.\n", 'D', "Bessa", x, 4294967295, x, x, 97, ptr);
//
//	printf("\nThe value returned by printf() for the above string is : %d\n\n", printf("%s", str));
//	ft_printf("\nThe value returned by ft_printf() for the above string is : %d", ft_printf("%s", str));
//}
//