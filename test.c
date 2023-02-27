/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:59:42 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/10 14:30:01 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("----TEst----\n");
	printf(" | return %d\n", ft_printf("c: %c", 'A'));
	printf(" | return %d\n", printf("c: %c", 'A'));
	printf(" | return %d\n", ft_printf("s: %s", "adieu ct'equipe"));
	printf(" | return %d\n", printf("s: %s", "adieu ct'equipe"));
	printf(" | return %d\n", ft_printf("p: %p", "adieu ct'equipe"));
	printf(" | return %d\n", printf("p: %p", "adieu ct'equipe"));
	printf(" | return %d\n", ft_printf("d: %d", 250));
	printf(" | return %d\n", printf("d: %d", 250));
	printf(" | return %d\n", ft_printf("i: %i", 42));
	printf(" | return %d\n", printf("i: %i", 42));
	printf(" | return %d\n", ft_printf("u: %u", 1258));
	printf(" | return %d\n", printf("u: %u", 1258));
	printf(" | return %d\n", ft_printf("x: %x", 1258));
	printf(" | return %d\n", printf("x: %x", 1258));
	printf(" | return %d\n", ft_printf("X: %X", 1258));
	printf(" | return %d\n", printf("X: %X", 1258));
	printf(" | return %d\n", ft_printf("%%"));
	printf(" | return %d\n", ft_printf("%%"));
	printf(" | return %d\n", ft_printf("rien: %s", ""));
	printf(" | return %d\n", printf("rien: %s", ""));
}
