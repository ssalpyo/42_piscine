/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:57:08 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/25 02:26:45 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *cp;

	cp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (cp);
}
