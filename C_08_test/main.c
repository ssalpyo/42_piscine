/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:03:40 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/03 21:07:38 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

int		main(int ac, char **av)
{
	struct s_stock_str	*arr;

	arr = ft_strs_to_tab(ac, av);
	ft_show_tab(arr);
	return 0;
}
