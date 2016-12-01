/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:00:37 by kacoulib          #+#    #+#             */
/*   Updated: 2016/12/01 17:49:37 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			r;
	int			isneg;
	const char	*tmp;

	r = 0;
	isneg = 0;
	tmp = ft_strtrim(str);
	if (!str || !ft_strlen(tmp))
		return (0);
	if (*tmp == '+')
		tmp++;
	if (*tmp == '-')
	{
		isneg = 1;
		tmp++;
	}
	while (*tmp != '\0' && ft_isdigit(*tmp))
		r = r * 10 + (*tmp++ - '0');
	return (isneg ? -r : r);
}
