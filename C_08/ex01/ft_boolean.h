/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonhong <seonghong@student.42seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:51:08 by seonhong          #+#    #+#             */
/*   Updated: 2020/11/02 16:13:41 by seonhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef enum {
	false = 0,
	true = 1,
}	t_bool;

# define FALSE false
# define TRUE true

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 == 0)

void		ft_putstr(char *str);

t_bool		ft_is_even(int nbr);

#endif
