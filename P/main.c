/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:55:50 by jpinyot           #+#    #+#             */
/*   Updated: 2017/11/21 22:56:06 by jpinyot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int		main(int argc, char **argv)
{
	ft_argcerr(argc);
	ft_getfile(argv[1]);
	return (0);
}
