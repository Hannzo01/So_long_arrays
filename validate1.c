#include "so_long.h"

int check_map_validity(t_map *game_map)
{
    if ((map_rectangulaire(game_map->map) == 0))
		return(ft_putstr_fd("Error\nmap is not rectangular!\n", 2), 1);
	if (wall_validity(game_map) == 0)
		return (ft_putstr_fd("Error\nMap is not surrounded by walls!\n", 2), 1);
	if (valid_characters(game_map) == 0)
		return ((ft_putstr_fd("Error\nInvalid char\n", 2), 1));
    return (1);
}