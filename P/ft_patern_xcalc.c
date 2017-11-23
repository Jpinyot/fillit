/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patern_xcalc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 00:51:44 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/23 01:07:04 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

size_t	ft_patern_xcalc(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}
