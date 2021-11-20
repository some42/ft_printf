/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:23:18 by agaliste          #+#    #+#             */
/*   Updated: 2021/08/30 04:46:04 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	while (i < len)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
