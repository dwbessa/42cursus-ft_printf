/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:25:12 by dbessa            #+#    #+#             */
/*   Updated: 2023/10/23 17:39:47 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf.h"

static void	to_char(unsigned long n, int arg, int *count)
{
    const char	*alpha_upp = "0123456789ABCDEF";
    const char	*alpha_low = "0123456789abcdef";
    char		hex;

    if (arg == 'X')
        hex = alpha_upp[n % 16];
    else if (arg == 'x')
        hex = alpha_low[n % 16];
    write(1, &hex, 1);
    (*count)++;
}

int	ft_puthexa(unsigned long d, int arg)
{
    int	count;
    int	digits[16];
    int	i;

    count = 0;
    if (d == 0)
    {
        to_char(d, arg, &count);
        return (count);
    }
    i = 0;
    while (d > 0)
    {
        digits[i++] = d % 16;
        d /= 16;
    }
    while (--i >= 0)
        to_char(digits[i], arg, &count);
    return (count);
}
