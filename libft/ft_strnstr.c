/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:24:52 by tmatlena          #+#    #+#             */
/*   Updated: 2018/05/31 12:23:36 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	if (!*needle)
		return ((char *)haystack);
	i2 = 0;
	while (haystack[i2])
	{
		i = 0;
		while (haystack[i2 + i] == needle[i] && i2 + i < len)
			if (!needle[++i])
				return ((char *)(haystack + i2));
		i2++;
	}
	return (0);
}
