/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 03:29:34 by agaliste          #+#    #+#             */
/*   Updated: 2021/09/02 21:14:53 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *inp, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	cont = 0;
	i = 0;
	va_start(ap, inp);
	cont += ft_prsprint(i, cont, inp, ap);
	va_end(ap);
	return (cont);
}
