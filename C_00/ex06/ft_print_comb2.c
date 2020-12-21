/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 03:36:21 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/18 05:06:08 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int x, int y);

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			ft_print_num(x, y);
			if (y == 99)
			{
				x++;
				y = x + 1;
			}
			else
			{
				y++;
			}
		}
	}
}

void	ft_print_num(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = x / 10 + '0';
	b = x % 10 + '0';
	c = y / 10 + '0';
	d = y % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (x < 98)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
