/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:06:59 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/22 11:40:37 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	check_char(char *str, char c)
{
	int	i;
	int	len;

	len = ft_strlength(str);
	i = 0;
	while (i < len - 1) //there is a /n 
	{
		if (str[i] != c)
			return (0);
		i++;
	}
	return (1);
}
int	wall_validity(t_map *g_map)
{
	int	i;
	int j;
	
	if (check_char(g_map->map[0], '1') == 0)
		return (0);
	//array indices start at 0
	else if (check_char(g_map->map[g_map->rows - 1], '1') == 0)
		return (0);

	i = 0;
	while (g_map->map[i] != NULL)
	{
		j = 0;
		while (g_map->map[i][j] != '\0')
		{
			if (j == 0 || j == g_map->col - 1)
			{
				if (g_map->map[i][j] != '1')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
int	is_valid(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] != 'P' || map[i][j] != 'E' || map[i][j] != 'C' || map[i][j] != '1' || map[i][j] != '0') //|| map[i][j] != '\n') 
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	initialize(t_map *g_map)
{
	g_map->collectibles = 0;
	g_map->p = 0;
	g_map->e = 0;
}

int	valid_characters(t_map *g_map)
{
	int	i;
	int	j;

	i = 0;
	if (is_valid(g_map->map) == 0)
		return (0);
	initialize(g_map);
	while (g_map->map[i] != NULL)
	{
		j = 0;
		while (g_map->map[i][j] != '\0')
		{
			if (g_map->map[i][j] == 'C')
				g_map->collectibles++;
			else if (g_map->map[i][j] == 'P')
				g_map->p++;
			else if (g_map->map[i][j] == 'E')
				g_map->e++;
			j++;
		}
		i++;
	}
	if (g_map->collectibles >= 1 && g_map->e == 1 && g_map->p == 1)
	{
		printf("valid char");
		return (1);
	}
	return (0);
}
