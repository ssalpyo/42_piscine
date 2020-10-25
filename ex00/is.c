/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:52:49 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 18:59:37 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

t_bool		ft_is_numeric(char ch)
{
	return (ch >= '0' && ch <= '9');
}

t_bool		ft_is_whitespace(char ch)
{
	return (ch == ' ' || ch == '\n' || ch == '\t'
			|| ch == '\v' || ch == '\r' || ch == '\f');
}

t_bool		ft_is_separatable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(ft_is_whitespace(*str) || ft_is_numeric(*str)))
			return (1);
		++str;
	}
	return (0);
}

t_bool		ft_is_overflow(char *str)
{
	int	acc;
	int	temp;

	while (*str)
	{
		acc = 0;
		while (*str && ft_is_whitespace(*str))
			++str;
		while (*str && ft_is_numeric(*str))
		{
			temp = acc;
			acc *= 10;
			acc += (*str++ - 48);
			if (temp > acc)
				return (1);
		}
		++str;
	}
	return (0);
}
