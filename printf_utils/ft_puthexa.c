/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:25:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/20 13:00:01 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../ft_printf.h"

static void	to_char(unsigned int n, int arg)
{
	const char	*alpha_upp = "0123456789ABCDEF";
	const char	*alpha_low = "0123456789abcdef";

	if (arg == 'X')
		write(1, &alpha_upp[n], 1);
	else if (arg == 'x')
		write(1, &alpha_low[n], 1);
}

int	ft_puthexa(unsigned int d, int arg)
{
	int	r;
	int	i;

	i = 0;
	r = d % 16;
	if (d - r == 0)
	{
		to_char(r, arg);
		i++;
	}
	else
		ft_puthexa((d - r) / 16, arg);
	if (d - r != 0)
	{
		to_char(r, arg);
		i++;
	}
	return (i);
}
