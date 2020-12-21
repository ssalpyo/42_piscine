/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:12:37 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/19 21:32:48 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(char *num, int n, int index, int i);

void	ft_print_combn(int n)
{
	char	num[n];

	ft_comb(num, n, 0, 0);
}

void	ft_comb(char *num, int n, int index, int i)
{
	if (index == n)
	{
		write(1, num, n);
		if (num[0] != (10 - n) + '0')
		{
			write(1, ", ", 2);
		}
		return ;
	}
	while (i < 10)
	{
		num[index] = i + '0';
		i++;
		ft_comb(num, n, index + 1, i);
	}
}
