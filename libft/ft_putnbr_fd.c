/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:32:01 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/12 11:33:06 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizecheck_fd(int c)
{
	int		res;

	res = 0;
	if (c < 0)
		c = c * -1;
	while (c >= 0)
	{
		c = c / 10;
		res++;
		if (c == 0)
			return (res);
	}
	return (res);
}

static int	ft_sign_fd(int c)
{
	if (c < 0)
		return (1);
	return (0);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		k;
	char	str[12];

	ft_bzero(str, 12);
	i = ft_sizecheck_fd(n) + ft_sign_fd(n);
	k = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		while (i--)
		{
			if (n < 0)
			{
				n = n * -1;
				k = 1;
			}
			str[i] = (n % 10) + 48;
			n = n / 10;
		}
		if (k == 1)
			str[0] = '-';
		ft_putstr_fd(str, fd);
	}
}
