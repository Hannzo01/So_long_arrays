/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_validate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:37:01 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/19 15:28:07 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int	validate_file(char *str)
{
	if (ft_strlen(str) < 5)
		return (1);
	if (strncmp(str, ".ber", 4) != 0)
		return (1);
	return (0);
}


