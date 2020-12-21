/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:50:23 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/28 20:24:50 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base(char *base);

int		ft_check(char c, char *base);

int		ft_atoi_base(char *str, char *base)
{
	int		num;
	int		sign;
	int		len;

	num = 0;
	sign = 1;
	len = ft_base(base);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\r' || *str == '\f'))
	{
		str++;
	}
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (len == 0)
		return (0);
	while (*str && ft_check(*str, base) >= 0)
		num = num * len + ft_check(*str++, base);
	num *= sign;
	return (num);
}

int		ft_base(char *base)
{
	int len;
	int i;

	len = 0;
	while (base[len])
	{
		i = len + 1;
		while (base[i])
		{
			if (base[len] == base[i])
				return (0);
			i++;
		}
		if (base[len] == '+' || base[len] == '-' || base[len] == ' '
				|| base[len] == '\n' || base[len] == '\t'
				|| base[len] == '\v' || base[len] == '\r' || base[len] == '\f')
			return (0);
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

int		ft_check(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}
