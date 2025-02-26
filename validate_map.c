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

int	wall_is_valid(char **map)
{
	int	i;
	int	j;
	int	len;
	
	len = ft_strlength(map[0]);
	
	while (map[0] != '\0')
	{
		if (map[0][j] != '1')
			return (1);
		j++;
	}
}