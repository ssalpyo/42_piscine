/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:52:41 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/05 03:28:06 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base(char *base);

int		ft_check(char c, char *base);

int		ft_strlen(char *str);

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

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
