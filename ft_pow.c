/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:42:39 by kacoulib          #+#    #+#             */
/*   Updated: 2016/12/07 19:46:53 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int base, int exponant)
{
	int	i;
	int	r;

	i = 1;
	r = base;
	while (i++ < exponant)
		r *= base;
	return (r);
}
