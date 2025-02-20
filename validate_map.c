/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:06:59 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/20 18:15:08 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

int	wall_is_valid(char **map)
{
	size_t	i;
	size_t	j;
	size_t	len;
	
	len = ft_strlen(map[0]);
	
	while (map[0] != '\0')
	{
		if (map[0][j] != '1')
			return (1);
		j++;
	}
}