/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:25:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/19 17:41:02 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	to_char(unsigned int n)
{
	const char	*alphaHex = "0123456789ABCDEF";

	write(1, &alphaHex[n], 1);
}

void	ft_puthexa(unsigned int d)
{
	int	r;

	r = d % 16;
	if (d - r == 0)
		to_char(r);
	else
		ft_puthexa((d - r) / 16);
	if (d - r != 0)
		to_char(r);
}

int	main()
{
	unsigned int	i;
	i = 0;
	while (i < 256)
	{
		ft_puthexa(i);
		ft_putchar(' ');
		i++;
	}
}