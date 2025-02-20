/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:46:04 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/20 17:02:18 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list *lst_new(char *data)
{
    t_list *new_node;
    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->data = data;
    new_node->next = NULL;
    return (new_node);
}

void    lst_add_back(t_list **lst, char* data)
{
    if (lst == NULL)
        return ;
    t_list *new_node;
    t_list *head;
    
    new_node = lst_new(data);
    if (!new_node)
        return ;
    
    if (*lst == NULL)
    {
        *lst = new_node;
        return ;
    }
    head = *lst;
    while (head->next != NULL)
        head = head->next;
    head->next = new_node;
}

int node_len(t_list *node)
{
    int i;

    i = 0;
    while (node->data[i] != '\0')
        i++;
    i--;
    return (i);
}

void    free_list(t_list **head)
{
    t_list *current;
    t_list *tmp;

    if (!head)
        return ;
    current = *head;
    while (current != NULL)
    {
        tmp = current->next;
        free(current);
        current = tmp;
    }
    *head = NULL;
}


