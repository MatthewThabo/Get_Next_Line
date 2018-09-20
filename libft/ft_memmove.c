/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:29:16 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/11 12:30:41 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*strdst;
	unsigned char	*strsrc;

	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (src < dst)
	{
		while (len)
		{
			strdst[len - 1] = strsrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
