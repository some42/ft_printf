/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:06:56 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 03:38:14 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsnbr_base(unsigned int nbr, char *base)
{
	int	nbr_final[100];
	int	cerdada[3];

	cerdada[0] = 0;
	cerdada[1] = 0;
	cerdada[2] = 0;
	if (check_base(base))
	{
		if (nbr == 0)
			cerdada[2] += ft_putchar('0');
		while (base[cerdada[1]])
			cerdada[1]++;
		while (nbr)
		{
			nbr_final[cerdada[0]] = nbr % cerdada[1];
			nbr = nbr / cerdada[1];
			cerdada[0]++;
		}
		while (--cerdada[0] >= 0)
			cerdada[2] += ft_putchar(base[nbr_final[cerdada[0]]]);
	}
	return (cerdada[2]);
}
