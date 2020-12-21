/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 21:07:29 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/28 22:30:21 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		if (power == 0)
			return (1);
		else
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
