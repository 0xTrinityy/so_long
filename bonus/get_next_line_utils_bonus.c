/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:03:00 by tbelleng          #+#    #+#             */
/*   Updated: 2023/02/16 20:03:02 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int	check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

char	*get_line(char *rest)
{
	char	*str;
	int		i;

	i = 0;
	if (rest[i] == 0)
		return (0);
	str = malloc(sizeof(char) * ft_strlen(rest) + 1);
	if (!str)
		return (0);
	while (rest[i])
	{
		str[i] = rest[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*get_rest(char *rest)
{
	char	*str;
	int		i;
	int		u;

	u = 0;
	i = ft_strlen(rest);
	if (!i)
	{
		free(rest);
		return (NULL);
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	while (rest[i])
		str[u++] = rest[i++];
	str[u] = 0;
	free(rest);
	return (str);
}
