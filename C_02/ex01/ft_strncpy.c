/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:08:55 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/22 01:28:40 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*c;

	c = dest;
	while (n)
	{
		if (*src)
		{
			*dest++ = *src++;
		}
		else
		{
			*dest++ = '\0';
		}
		n--;
	}
	return (c);
}
