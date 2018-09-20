/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:14:52 by tmatlena          #+#    #+#             */
/*   Updated: 2018/05/28 12:02:52 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int t;

	i = 0;
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		t = 0;
		while (needle[t] != '\0' && haystack[i + t] == needle[t])
			t++;
		if (needle[t] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
