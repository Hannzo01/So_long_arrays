/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:23:07 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/20 17:59:38 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	t_list *head;
	t_map	*game_map;

	head = NULL;
	game_map = malloc(sizeof(t_map));
	if (argc != 2)
		return (1);
	if ((validate_file_name(argv[1])) == 0)
		return (1);

	game_map->rows = store_map_in_list(argv[1], &head);
	game_map->col = node_len(head);
	game_map->map = allocate_2d_array(game_map->rows, game_map->col);
	game_map->map = fill_2d_array(game_map->map, &head);
	free_list(&head);
	if (check_map_validity(game_map) == 0)
	{
		return (1);
	}
	// if ((map_rectangulaire(game_map->map) == 0))
	// 	return(ft_putstr_fd("Error\nmap is not rectangular!\n", 2), 1);
	// if (wall_validity(game_map) == 0)
	// 	return (ft_putstr_fd("Error\nMap is not surrounded by walls!\n", 2), 1);
	// if (valid_characters(game_map) == 0)
	// 	return ((ft_putstr_fd("Error\nInvalid char\n", 2), 1));
	return (0);
}
