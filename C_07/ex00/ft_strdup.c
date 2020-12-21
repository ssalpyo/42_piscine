/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:09:37 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/04 09:11:41 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*cp;
	char	*result;

	cp = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (cp == NULL)
		return (NULL);
	result = cp;
	while (*src)
		*cp++ = *src++;
	*cp = '\0';
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
