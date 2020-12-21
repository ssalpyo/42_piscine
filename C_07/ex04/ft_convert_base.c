/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:42:06 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/05 06:04:15 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);

char	*ft_putnbr(int nbr, int len, int base_size, char *base_to);

int		ft_check_size(int nbr, int base);

char	*ft_malloc(int num, int base_size);

int		ft_base(char *base);

int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		len;
	int		base_size;

	if (nbr == 0)
		return (0);
	if (!(ft_base(base_from)))
		return (0);
	if (!(len = ft_base(base_to)))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	base_size = ft_check_size(num, len);
	return (ft_putnbr(num, len, base_size, base_to));
}

char	*ft_malloc(int num, int base_size)
{
	char	*arr;

	if (num < 0)
	{
		if (!(arr = (char *)malloc(sizeof(char) * (base_size + 2))))
			return (0);
	}
	else
	{
		if (!(arr = (char *)malloc(sizeof(char) * (base_size + 1))))
			return (0);
	}
	return (arr);
}

char	*ft_putnbr(int num, int len, int base_size, char *base_to)
{
	int			i;
	int			is_minus;
	char		*arr;
	long long	nbr;

	nbr = num;
	arr = ft_malloc(num, base_size);
	i = 1;
	is_minus = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		is_minus = 1;
		base_size++;
	}
	while (i <= base_size)
	{
		arr[base_size - i++] = base_to[nbr % len];
		nbr /= len;
	}
	if (is_minus)
		arr[0] = '-';
	arr[base_size] = '\0';
	return (arr);
}

int		ft_check_size(int nbr, int base)
{
	int		len;

	len = 1;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / base != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
