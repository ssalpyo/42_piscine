/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 22:21:40 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/22 00:29:52 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (*src && i < size - 1)
		{
			*dest++ = *src++;
			i++;
		}
	}
	*dest = '\0';
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
