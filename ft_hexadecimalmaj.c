/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimalmaj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:53:51 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/10 15:14:16 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimalmaj(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_hexadecimalmaj(nbr / 16);
		i += ft_hexadecimalmaj(nbr % 16);
	}
	if (nbr < 16)
	{
		if (nbr <= 9)
			ft_putchar_fd(nbr + '0', 1);
		else
			ft_putchar_fd((nbr - 10) + 'A', 1);
		i++;
	}
	return (i);
}
