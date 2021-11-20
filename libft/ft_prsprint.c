/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 02:37:48 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 04:45:22 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkparam(const char *inp, int i, int cont, va_list (ap))
{
	if (inp[i + 1] == '%')
		cont += write(1, "%", 1);
	if (inp[i + 1] == 'c')
		cont += ft_putchar(va_arg(ap, int));
	if (inp[i + 1] == 's')
		cont += ft_putstr(va_arg(ap, char *));
	if (inp[i + 1] == 'p')
		cont += ft_hexpoint(va_arg(ap, size_t));
	if (inp[i + 1] == 'i' || inp[i + 1] == 'd')
		cont += ft_putnbr(va_arg(ap, int));
	if (inp[i + 1] == 'u')
		cont += ft_putunsnbr(va_arg(ap, unsigned int));
	if (inp[i + 1] == 'x')
		cont += ft_putunsnbr_base(va_arg(ap, int), "0123456789abcdef");
	if (inp[i + 1] == 'X')
		cont += ft_putunsnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	return (cont);
}

int	ft_prsprint(int i, int cont, const char *inp, va_list ap)
{
	if (!inp)
		return (0);
	while (inp[i] != '\0')
	{
		if (inp[i] == '%')
		{
			cont = checkparam(inp, i, cont, ap);
			i++;
		}
		else
			cont += write(1, &inp[i], 1);
		i++;
	}
	return (cont);
}
