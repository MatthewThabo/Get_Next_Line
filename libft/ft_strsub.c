/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:32:39 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/07 11:06:36 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == 0)
		return (NULL);
	str = ft_strnew(len);
	if (str == 0)
		return (NULL);
	i = 0;
	while (i < len)
		*(str + i++) = *(s + start++);
	return (str);
}
