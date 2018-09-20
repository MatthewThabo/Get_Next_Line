/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatlena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:09:36 by tmatlena          #+#    #+#             */
/*   Updated: 2018/06/29 10:40:57 by tmatlena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	stoping_point(char *buff)
{
	int		i;

	i = 0;
	while (buff[i] != '\n' && buff[i])
		i++;
	if (buff[i] == '\n')
	{
		buff[i] = '\0';
		return (i);
	}
	else
		return (-1);
}

static char	*add(char *buff, char *buz)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	len1 = 0;
	len2 = 0;
	if (buff)
		len1 = ft_strlen(buff);
	if (buz)
		len2 = ft_strlen(buz);
	ptr = (char *)malloc(sizeof(*ptr) * (len1 + len2 + 1));
	ft_memcpy(ptr, buff, len1);
	ft_memcpy(ptr + len1, buz, len2);
	ptr[len1 + len2] = '\0';
	free(buff);
	ft_bzero(buz, BUFF_SIZE + 1);
	return (ptr);
}

static int	check(char **buff, char **buz, char **line)
{
	char	*ptr;
	int		final;

	*buff = add(*buff, *buz);
	final = stoping_point(*buff);
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		ptr = *buff;
		*buff = ft_strdup(*buff + final + 1);
		free(ptr);
		return (1);
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static char		*buff[12000];
	char			*tmp;
	int				ret;
	int				result;

	tmp = ft_strnew(BUFF_SIZE);
	if (!line || BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, tmp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		result = check(&buff[fd], &tmp, line);
		free(tmp);
		if (result == 1)
			return (1);
		tmp = ft_strnew(BUFF_SIZE);
	}
	if ((result = check(&buff[fd], &tmp, line)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
}
