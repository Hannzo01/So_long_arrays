/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:23:20 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/26 23:08:15 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//		Headers		//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "gnl/get_next_line.h"


typedef struct s_list
{
	char		*data;
	struct s_list *next;
}	t_list;

typedef struct s_map
{
	char	**map;
	int		rows;
	int		col;
	int		x;
	int		y;
	int		len;
	int		collectibles;
	int		p;
	int		e;
}	t_map;


//		validate 		//
int		validate_file_name(char *str);
int		store_map_in_list(char *str, t_list **head);
char	**allocate_2d_array(int lignes, int colonnes);
char	**fill_2d_array(char **map, t_list **head);

//		helper functions  	//
t_list	*lst_new(char *data);
void	lst_add_back(t_list **lst, char *data);
void    free_list(t_list **head);
int		map_rectangulaire(char **map);
int		ft_strlength(char *str);
void	ft_putstr_fd(char *s, int fd);
int		wall_validity(t_map *g_map);
int		check_char(char *str, char c);
int	valid_characters(t_map *g_map);
int	is_valid(char **map);
void	initialize(t_map *g_map);
int check_map_validity(t_map *game_map);







//		lists helper		//
int node_len(t_list *node);


# endif