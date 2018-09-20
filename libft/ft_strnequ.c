/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:54:33 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/11 12:00:38 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*one;
	char	*two;
	size_t	i;

	i = 0;
	one = (char *)s1;
	two = (char *)s2;
	if (n == 0)
		return (1);
	if (s1 == 0 || s2 == 0)
		return (0);
	while (i < n && s1[i])
	{
		if (one[i] != two[i])
			return (0);
		i++;
	}
	if ((one[i] != two[i] && one[i] == '\0') || n == 0)
		return (0);
	return (1);
}
