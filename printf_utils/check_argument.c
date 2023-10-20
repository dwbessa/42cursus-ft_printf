/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:46 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/20 09:45:46 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../ft_printf.h"

int	check_argument(const char *arg, int i, va_list ap)
{
	if (arg[i + 1] == 'c')
		ft_putchar(va_arg(ap, int));
	else if (arg[i + 1] == 's')
		ft_putstr(va_arg(ap, char *));
	else if (arg[i + 1] == 'd' || arg[i + 1] == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (arg[i + 1] == 'u')
		ft_putunsnbr(va_arg(ap, unsigned int));
	else if (arg[i + 1] == 'p')
	{
		ft_putstr("0x");
		ft_puthexa(va_arg(ap, unsigned int), 'x');
	}
	else if (arg[i + 1] == 'x' || arg[i + 1] == 'X')
		ft_puthexa(va_arg(ap, unsigned int), arg[i + 1]);
	else if (arg[i + 1] == '%')
		ft_putchar('%');
	return (0);
}
