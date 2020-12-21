/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:33:24 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/17 22:30:09 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	vertex(int x, int max_x);
void	middle(int x, int max_x);

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
			if (y == 0 || y == max_y - 1)
			{
				vertex(x, max_x);
			}
			else
			{
				middle(x, max_x);
			}
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

void	vertex(int x, int max_x)
{
	if (x == 0 || x == max_x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	middle(int x, int max_x)
{
	if (x == 0 || x == max_x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
