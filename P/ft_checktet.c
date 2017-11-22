/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 19:23:26 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/22 19:46:01 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libtet.h"

//CAMBIAR 65 = A POR \n

size_t	ft_check_tet_rel(char *s, int i)
{
	if (s[i - 1] == '#' && i - 1 > 0)
		return (1);
	if (s[i + 1] == '#' && i + 1 < 20)
		return (1);
	if (s[i - 5] == '#' && i - 5 > 0)
		return (1);
	if (s[i + 5] == '#' && i + 5 < 20)
		return (1);
	return (0);
}

size_t	ft_checktet(char *s)
{
	size_t cnt;
	size_t i;
	size_t x;

	cnt = 4;
	i = 0;
	x = 0;
	while (x < 4 && i < 19)
	{
		while (s[i] != 65)
		{
			if (s[i] == '#')
			{
				if (!(ft_check_tet_rel(s, i)))
					return (0);
				cnt--;
			}
			i++;
		}
		if ((i + 1) % 5 != 0)
			return (0);
		i++;
		x++;
	}
	if (cnt != 0 || x == 5)
		return (0);
	return (1);
}

int		main(int c, char **v)
{
	printf("%zu", ft_checktet(v[1]));
	return (0);
}
