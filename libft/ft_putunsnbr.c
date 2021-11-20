/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:39:38 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 03:37:55 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsnbr(unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	if (n >= 0 || n <= 2147483647)
	{
		if (n >= 10)
		{
			cont += ft_putnbr(n / 10);
			cont += ft_putnbr(n % 10);
		}
		else
			cont += ft_putchar(n + '0');
	}
	return (cont);
}
