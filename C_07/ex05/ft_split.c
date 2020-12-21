/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:30:25 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/05 01:41:24 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check(char c, char *charset);

int		ft_size(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	while (*str)
	{
		j = 0;
		if (!(arr[i] = (char *)malloc(sizeof(char) * (ft_size(str, charset) + 1))))
			return (NULL);
		while (ft_check(*str, charset))
			str++;
		while (!(ft_check(*str, charset)))
			arr[i][j++] = *str++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}

int		ft_check(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_size(char *str, char *charset)
{
	int		i;
	int		size;

	size = 0;
	while (*str)
	{
		i = 0;
		while (charset[i])
		{
			if (*str == charset[i])
				return (size);
			i++;
		}
		size++;
		str++;
	}
	return (size);
}
