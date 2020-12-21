/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:24:01 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/19 09:47:53 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int subs;
	int size_1;

	i = 0;
	size_1 = size - 1;
	while (size_1 > i)
	{
		subs = tab[i];
		tab[i] = tab[size_1];
		tab[size_1] = subs;
		i++;
		size_1--;
	}
}
