/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:37:01 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/22 11:42:18 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validate_file_name(char *str)
{
	int	len;

	len = ft_strlength(str);
	if (len < 5)
	{
		printf("len is %zu\nOnly the extension exist\n", len);
		return (1);
	}
	// check if the last 4 char are .ber 
	if (strncmp(str + len - 4, ".ber", 4) != 0)  // &str[len - 4]
	{	
		printf("comparaison failed \n");
		return (1);
	}
	else
	{
		//printf("valid name\n");
		return (0);
	}
}

int	store_map_in_list(char *str, t_list **head)
{
	int fd;
	char *line;
	int counter;

	counter = 0;
	fd = open(str, O_RDONLY); //Opens the file in read-only mode.
	while ((line = get_next_line(fd)) != NULL)
	{
		lst_add_back(head, line);
		counter++;
	}
	//ft_display(*head);
	return (counter);
}

char	**allocate_2d_array(int lignes, int colonnes)
{
	char **arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char *) * (lignes + 1));
	if (!arr)
		return NULL;
	while(i < lignes)
	{
		arr[i] = malloc(colonnes + 1);  // +1 \0 the str
		if (!arr[i])
			return (NULL);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**fill_2d_array(char **map, t_list **head)
{
	int	i;
	int	j;
	t_list *current = *head;

	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (j < ft_strlength(current->data))
		{
			map[i][j] = current->data[j];
			j++;
		}
		map[i][j] = '\0';
		i++;
		current = current->next;
	}
	return (map);
}
int	map_rectangulaire(char **map)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlength(map[0]);
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
			j++;
		if (j != len)
			return (1);
		i++;
	}
	i--;
	if (i == 1)
		return (1);
	else
	{	
		printf("map is valid");
		return (0);
	}
}
