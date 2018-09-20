/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:08:32 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/13 16:46:22 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	chr;
	size_t	wdc;
	size_t	t;
	size_t	i;
	char	**strg;

	i = 0;
	strg = NULL;
	wdc = 0;
	if (s && ((strg = (char **)malloc(sizeof(*strg) * (ft_strlen(s) / 2 + 2)))))
	{
		while (i < ft_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			chr = i;
			while (s[i] != c && s[i])
				i++;
			t = i;
			if ((t - chr) > 0)
				strg[wdc++] = ft_strsub(s, chr, t - chr);
		}
		strg[wdc] = 0;
	}
	return (strg);
}
