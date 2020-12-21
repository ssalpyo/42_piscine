/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:32:15 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/17 22:24:37 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	vertex(int y, int max_y);
void	middle(int y, int max_y);

void	rush(int max_x, int max_y)
{
	int	x;
	int	y;

	y = 0;
	while (y < max_y)
	{
		x = 0;
		while (x < max_x)
		{
			if (x == 0 || x == max_x - 1)
			{
				vertex(y, max_y);
			}
			else
			{
				middle(y, max_y);
			}
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

void	vertex(int y, int max_y)
{
	if (y == 0)
	{
		ft_putchar('A');
	}
	else if (y == max_y - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	middle(int y, int max_y)
{
	if (y == 0 || y == max_y - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
