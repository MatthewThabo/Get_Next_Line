/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:49:26 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/07 15:23:44 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*one;
	char	*two;

	one = (char *)s1;
	two = (char *)s2;
	if (one == 0 || two == 0)
		return (0);
	if (ft_strcmp(one, two) != 0)
		return (0);
	else
		return (1);
}
