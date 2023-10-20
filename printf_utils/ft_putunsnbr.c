/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:18:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/20 12:41:01 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../ft_printf.h"

int	ft_putunsnbr(unsigned int nb)
{
	int	i;
	i = 0;
	if (nb >= 0 && nb <= 9)
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
