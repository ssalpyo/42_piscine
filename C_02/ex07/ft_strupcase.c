/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 18:57:52 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/21 10:34:48 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*c;

	c = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 'a' - 'A';
		}
		str++;
	}
	return (c);
}
