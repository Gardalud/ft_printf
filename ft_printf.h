/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:36:13 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/10 16:55:37 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include "./libft/libft.h"

int		ft_c(int c);
int		ft_s(char *str);
int		ft_d(int d);
int		ft_i(int i);
int		ft_u(unsigned int u);
int		ft_hexadecimal(unsigned long long nbr);
int		ft_p(unsigned long long p);
int		ft_x(unsigned int x);
int		ft_hexadecimalmaj(unsigned int nbr);
int		ft_xmaj(unsigned int xmaj);
int		ft_arbre(char c, va_list valist);
int		ft_printf(const char *drop, ...);

#endif
