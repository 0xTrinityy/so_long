/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:05:45 by tbelleng          #+#    #+#             */
/*   Updated: 2023/02/16 20:05:46 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_char(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] != 'E' && tab[i][j] != 'P' && tab[i][j] != 'C'
				&& tab[i][j] != '0' && tab[i][j] != '1')
			{
				write(2, "Invalid map\n", 12);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_length(char **tab)
{
	int	i;
	int	len;
	int	current_len;

	i = 0;
	len = ft_strlen(tab[i]);
	current_len = 0;
	while (tab[i] != 0)
	{
		current_len = ft_strlen(tab[i]);
		if (current_len != len)
		{
			write(2, "Invalid map\n", 12);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_startend(char **tab)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (tab[i] != 0)
	{
		len = ft_strlen(tab[i]);
		if (tab[i][0] != '1' || tab[i][len - 1] != '1')
		{
			write(2, "Invalid map\n", 12);
			return (0);
		}
		i++;
	}
	return (1);
}

int	line_count(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}
