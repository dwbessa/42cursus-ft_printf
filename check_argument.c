/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:46 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/19 17:52:18 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	check_argument(char arg)
{
	if (arg == 'c')
		ft_putchar(va_arg);
	else if (arg == 's')
		ft_putstr(va_arg);
	else if (arg == 'd' || arg == 'i')
		ft_putnbr(va_arg);
	else if (arg == 'u')
		ft_putunsnbr(va_arg);
	else if (arg == 'p')
	{
		ft_putstr("0x");
		ft_puthexa(arg);
	}
	else if (arg == 'x' || arg == 'X')
		ft_puthexa(va_arg);
	else if (arg == '%')
		ft_putchar('%');
}
