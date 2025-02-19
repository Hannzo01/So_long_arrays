/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 14:23:07 by kemzouri          #+#    #+#             */
/*   Updated: 2025/02/19 14:41:41 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	if ((validate_file(argv[1])) == 1)
	{
		printf("file name not valid");
		return (1);
	}
	
}