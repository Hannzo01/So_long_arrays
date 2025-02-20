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
	t_list *head = NULL;
	int	lignes;
	//char **arr;
	int colonnes;
	char **map;
	
	if (argc != 2)
		return (1);
	if ((validate_file_name(argv[1])) == 1)
	{
		//printf("file name is not valid");
		return (1);
	}
	lignes = store_map_in_list(argv[1], &head);
	colonnes = node_len(head);
	map = allocate_2d_array(lignes, colonnes);
	map = fill_2d_array(map, &head);
	free_list(&head);
	ft_display_2d_array(map);
	if ((map_rectangulaire(map) == 1))
	{
		printf("Error\nmap is not rec");
		return (1);
	}


	//printf("lignes %d :  colonne %d : ", lignes, colonnes);
	return (0);
}
