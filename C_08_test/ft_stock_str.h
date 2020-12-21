/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:43:34 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/03 21:11:18 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void				ft_putstr(char *str);

void				ft_putnbr(int nbr);

int					ft_strlen(char *str);

char				*ft_strdup(char *src);

void				ft_show_tab(struct s_stock_str *par);

#endif
