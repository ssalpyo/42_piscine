/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:44:02 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/02 10:33:07 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	i;
	long long	num;

	i = 0;
	num = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((i * i) < num)
		++i;
	if ((i * i) == num)
		return (i);
	else
		return (i);
}

int		ft_is_prime(int nb)
{
	long long	i;
	long long	num;
	long long	nl;
	long long	sqrt;

	sqrt = ft_sqrt(nb);
	i = 2;
	num = 2;
	nl = nb;
	if (nl < 2)
		return (0);
	if (nl < 4)
		return (1);
	if ((nl % 2) == 0 || (nl % 3) == 0)
		return (0);
	while (i <= sqrt)
	{
		if ((nl % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
