/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:29:45 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/28 22:21:15 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0)
	{
		if (nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		if (nb == 0)
			return (1);
		if (nb < 0)
			return (0);
	}
	return (0);
}
