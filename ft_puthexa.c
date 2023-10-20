/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:25:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/20 08:31:25 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	to_char(unsigned int n, int arg)
{
	const char	*alphaUpp = "0123456789ABCDEF";
	const char	*alphaLow = "0123456789abcdef";

	if (arg == 'X')
		write(1, &alphaUpp[n], 1);
	else if (arg == 'x')
		write(1, &alphaLow[n], 1);
}

void	ft_puthexa(unsigned int d, int arg)
{
	int	r;

	r = d % 16;
	if (d - r == 0)
		to_char(r, arg);
	else
		ft_puthexa((d - r) / 16, arg);
	if (d - r != 0)
		to_char(r, arg);
}