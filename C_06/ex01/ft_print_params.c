/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:30:08 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/02 09:40:16 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	while (argc-- > 1 && argv++)
	{
		while (**argv)
			write(1, (*argv)++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
