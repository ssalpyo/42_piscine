/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonhong@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:16:38 by seonhong          #+#    #+#             */
/*   Updated: 2020/10/17 22:09:42 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	vertex(int x, int max_x, int y);
void	middle(int x, int max_x);

void	rush(int max_x, int max_y)
{
	int x;
	int y;

	y = 0;
	while (y < max_y)
	{
		x = 0;
		while (x < max_x)
		{
			if (y == 0 || y == max_y - 1)
			{
				vertex(x, max_x - 1, y);
			}
			else
			{
				middle(x, max_x - 1);
			}
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	vertex(int x, int max_x, int y)
{
	if (x == 0 && y == 0)
	{
		ft_putchar('/');
	}
	else if (x == max_x && y > 0)
	{
		ft_putchar('/');
	}
	else if ((x == max_x && y == 0) || (x == 0 && y > 0))
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	middle(int x, int max_x)
{
	if (x == 0 || x == max_x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}
