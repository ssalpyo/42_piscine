/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:31:19 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/03 21:52:22 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int				len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	char			*cp;
	char			*result;

	cp = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (cp == NULL)
	{
		free(cp);
		return (NULL);
	}
	result = cp;
	while (*src)
		*cp++ = *src++;
	*cp = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*arr;
	int				i;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	i = -1;
	while (++i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}
