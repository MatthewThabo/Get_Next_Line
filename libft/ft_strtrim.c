/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:07:04 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/07 16:01:23 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		count;
	int		c;
	char	*p;

	i = 0;
	count = 0;
	c = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && (s[i] == '\t' || s[i] == '\n' || s[i] == ' '))
		i++;
	count = ft_strlen(s) - 1;
	while ((s[count] == '\t' || s[count] == '\n' ||
				s[count] == ' ') && (i < count))
		count--;
	p = ft_strnew(count - i + 1);
	if (p == '\0')
		return (NULL);
	while (i <= count)
	{
		p[c++] = s[i++];
	}
	p[count + 1] = '\0';
	return (p);
}
