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
	int		x;
	int		y;
	int		len;
}	t_map;


//		validate 		//
int		validate_file_name(char *str);
int		store_map_in_list(char *str, t_list **head);
char	**allocate_2d_array(int lignes, int colonnes);
char	**fill_2d_array(char **map, t_list **head);

//		helper functions  	//
t_list	*lst_new(char *data);
void	lst_add_back(t_list **lst, char *data);
void	ft_display(t_list *head); // DELETE LATER
void    free_list(t_list **head);
void	ft_display_2d_array(char **map); //DELETE LATER
int		map_rectangulaire(char **map);
int		ft_strlength(char *str);







//		lists helper		//
int node_len(t_list *node);


# endif