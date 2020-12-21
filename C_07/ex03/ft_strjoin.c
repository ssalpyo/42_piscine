/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:30:15 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/04 15:41:23 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src);

int		ft_total_len(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*arr;
	char	*result;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = ft_total_len(size, strs, sep);
	if (!(arr = (char *)malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	result = arr;
	while (i < size)
	{
		ft_strcpy(arr, strs[i]);
		arr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(arr, sep);
			arr += ft_strlen(sep);
		}
		i++;
	}
	*arr = '\0';
	return (result);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += (ft_strlen(strs[i++]) + ft_strlen(sep));
	total_len -= ft_strlen(sep);
	return (total_len);
}
