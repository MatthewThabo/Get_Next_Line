/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:13:17 by tmatlena          #+#    #+#             */
/*   Updated: 2018/05/31 12:21:02 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char	*ret;
	size_t	x;

	x = -1;
	ret = dest;
	while (++x < len)
	{
		if (*(src))
			*(dest++) = *(src++);
		else
			*(dest++) = 0;
	}
	return (ret);
}
