/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xmaj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:53:51 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/10 15:14:16 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xmaj(unsigned int xmaj)
{
	int	i;

	i = ft_hexadecimalmaj(xmaj);
	return (i);
}
