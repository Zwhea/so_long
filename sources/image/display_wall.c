/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:20 by twang             #+#    #+#             */
/*   Updated: 2023/02/22 21:35:26 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	display_midwalls(t_game *g, int i, int j)
{
	if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.b_mid_top, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.b_mid_bot, i, j);
	else
		display_image(g, g->txtr.walls.wall, i, j);
}

static void	display_specwalls(t_game *g, int i, int j)
{
	if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_bot_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.left_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.right_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_bot_left, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.i_bot_right, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_mid_left, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.i_mid_right, i, j);
	else
		display_midwalls(g, i, j);
}

static void display_inwalls(t_game *g, int i, int j)
{
	if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.column, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_top_left, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.i_top_right, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_bot_left, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.i_bot_right, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.in_wall, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall
		&& g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->txtr.walls.i_top_extr, i, j);
	else
		display_specwalls(g, i, j);
}

static void	display_borders(t_game *g, int i, int j)
{
	if (i == 0 && i != g->map.map_heigth - 1 && j != 0
		&& j != g->map.map_width - 1 && g->map.map[i + 1][j] == wall)
		display_image(g, g->txtr.walls.b_mid_top, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0
		&& j != g->map.map_width - 1 && g->map.map[i][j + 1] == wall)
		display_image(g, g->txtr.walls.b_mid_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j != 0
		&& j == g->map.map_width - 1 && g->map.map[i][j - 1] == wall)
		display_image(g, g->txtr.walls.b_mid_right, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0)
		display_image(g, g->txtr.walls.b_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->txtr.walls.b_right, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1
		&& j != g->map.map_width - 1 && j != 0)
		display_inwalls(g, i, j);
	else
		display_image(g, g->txtr.walls.wall, i, j);
}

void	display_walls(t_game *g, int i, int j)
{
	if (i == 0 && j == 0)
		display_image(g, g->txtr.walls.b_top_left, i, j);
	else if (i == 0 && j == g->map.map_width - 1)
		display_image(g, g->txtr.walls.b_top_right, i, j);
	else if (i == g->map.map_heigth - 1 && j == 0)
		display_image(g, g->txtr.walls.b_bot_left, i, j);
	else if (i == g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->txtr.walls.b_bot_right, i, j);
	else if (i != 0 && i == g->map.map_heigth - 1 && j != 0
		&& j != g->map.map_width - 1 && g->map.map[i - 1][j] == wall)
		display_image(g, g->txtr.walls.b_mid_bot, i, j);
	else
		display_borders(g, i, j);
}