/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:18:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/22 21:03:21 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf.h"

int	ft_putunsnbr(unsigned int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		ft_putunsnbr(nb / 10);
		ft_putunsnbr(nb % 10);
	}
	return (i);
}
