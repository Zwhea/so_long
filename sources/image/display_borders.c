/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_borders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:20 by twang             #+#    #+#             */
/*   Updated: 2023/02/22 17:23:21 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void display_top_borders(t_game *g, int i, int j)
{
	if (i == 0 && j == 0)
		display_image(g, g->texture.walls.b_top_left, i, j);
	
}

static void	display_borders1(t_game *g, int i, int j)
{
	
	else if (i == 0 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_top_right, i, j);
	else if (i == g->map.map_heigth - 1 && j == 0)
		display_image(g, g->texture.walls.b_bot_left, i, j);
	else if (i == g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_bot_right, i, j);
	else if (i != 0 && i == g->map.map_heigth - 1 && j != 0
		&& j != g->map.map_width - 1 && g->map.map[i - 1][j] == wall)
		display_image(g, g->texture.walls.b_mid_bot, i, j);
	else
		display_image(g, g->texture.walls.wall, i, j);
}

static void	display_borders2(t_game *g, int i, int j)
{
	if (i == 0 && i != g->map.map_heigth - 1 && j != 0
		&& j != g->map.map_width - 1 && g->map.map[i + 1][j] == wall)
		display_image(g, g->texture.walls.b_mid_top, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0
		&& j != g->map.map_width - 1 && g->map.map[i][j + 1] == wall)
		display_image(g, g->texture.walls.b_mid_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j != 0
		&& j == g->map.map_width - 1 && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.b_mid_right, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0)
		display_image(g, g->texture.walls.b_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_right, i, j);
	else
		display_image(g, g->texture.walls.wall, i, j);
}

void	display_borders(t_game *g, int i, int j)
{
	if (i == 0)
	{
		display_borders1(g, i, j);
	}
	else if (j == 0)
	{
		display_in_walls_part1(g, i, j);
	}
}