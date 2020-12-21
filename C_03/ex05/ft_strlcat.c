/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 02:21:35 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/25 03:02:25 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		b++;
	}
	while (src[i] && (a + i + 1) < size)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	if (a > size)
		return (size + b);
	else
		return (a + b);
}
