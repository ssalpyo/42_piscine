a/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:48:51 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/22 00:13:17 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		a;
	char	*c;

	c = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 'a' - 'A';
	str++;
	while (*str != '\0')
	{
		a = *(str - 1);
		if (a < '0' || (a > '9' && a < 'A') || (a > 'Z' && a < 'a') || a > 'z')
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 'a' - 'A';
			}
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str += 'a' - 'A';
		}
		str++;
	}
	return (c);
}
