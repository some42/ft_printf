/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 02:03:58 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 04:44:47 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexpoint(unsigned long pnt)
{
	int	cont;

	cont = 0;
	cont += write(1, "0x", 2);
	if (pnt != 0)
		cont += ft_putlngnbr_base(pnt, "0123456789abcdef");
	else
		cont += write(1, "0", 1);
	return (cont);
}
