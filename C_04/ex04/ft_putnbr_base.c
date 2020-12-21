/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 01:34:30 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/28 20:24:19 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_validation(char *base);

int		ft_strlen(char *base);

void	ft_repeat(long num, int len, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	num;

	num = nbr;
	len = 0;
	if (!(ft_validation(base)))
		return ;
	len = ft_strlen(base);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	ft_repeat(num, len, base);
}

int		ft_validation(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (!(base[i]) || !(base[i + 1]))
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *base)
{
	int		i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_repeat(long num, int len, char *base)
{
	if (num >= len)
	{
		ft_repeat(num / len, len, base);
		ft_repeat(num % len, len, base);
	}
	else
		write(1, &base[num], 1);
}
