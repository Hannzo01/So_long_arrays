/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:07:04 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/20 17:16:56 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

void	ft_display(t_list *head)   // delete later
{
	while (head != NULL)
	{
		printf("%s", head->data);
		head = head->next;
	}
	printf("\n");
}

void	ft_display_2d_array(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			printf("%c", map[i][j]);
			j++;
		}
		i++;
	}
}

