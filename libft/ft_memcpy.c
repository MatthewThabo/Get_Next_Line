/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:35:20 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/07 15:46:44 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	char		*strsrc;
	int			i;

	i = 0;
	strdst = (char *)dst;
	strsrc = (char *)src;
	while (n--)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
