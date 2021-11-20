/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:39:38 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/14 04:40:56 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	unsigned int	cont;

	cont = 0;
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			cont += ft_putstr("-2");
			cont += ft_putnbr(147483648);
		}
		else if (n >= 10)
		{
			cont += ft_putnbr(n / 10);
			cont += ft_putnbr(n % 10);
		}
		else if (n < 0)
		{
			n = -n;
			cont += ft_putchar('-');
			cont += ft_putnbr(n);
		}
		else
			cont += ft_putchar(n + '0');
	}
	return (cont);
}
