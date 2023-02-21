/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:28:45 by twang             #+#    #+#             */
/*   Updated: 2023/02/21 15:56:09 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	display_borders(t_game *g, int i, int j)
{
	if (i == 0 && j == 0)
		display_image(g, g->texture.walls.b_top_left, i, j);
	else if (i == 0 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_top_right, i, j);
	else if (i == g->map.map_heigth - 1 && j == 0)
		display_image(g, g->texture.walls.b_bot_left, i, j);
	else if (i == g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_bot_right, i, j);
	else if (i != 0 && i == g->map.map_heigth - 1 && j != 0 && j != g->map.map_width - 1 && g->map.map[i - 1][j] == wall)
		display_image(g, g->texture.walls.b_mid_bot, i, j);
	else if (i == 0 && i != g->map.map_heigth - 1 && j != 0 && j != g->map.map_width - 1 && g->map.map[i + 1][j] == wall)
		display_image(g, g->texture.walls.b_mid_top, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0 && j != g->map.map_width - 1 && g->map.map[i][j + 1] == wall)
		display_image(g, g->texture.walls.b_mid_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j != 0 && j == g->map.map_width - 1 && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.b_mid_right, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == 0)
		display_image(g, g->texture.walls.b_left, i, j);
	else if (i != 0 && i != g->map.map_heigth - 1 && j == g->map.map_width - 1)
		display_image(g, g->texture.walls.b_right, i, j);
	else
		display_image(g, g->texture.walls.wall, i, j);
}

static void	display_in_walls(t_game *g, int i, int j)
{
	if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.column, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_top_left, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.i_top_right, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_bot_left, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.i_bot_right, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.in_wall, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_top_extr, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_bot_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.left_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.right_extr, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_bot_left, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.i_bot_right, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] != wall)
		display_image(g, g->texture.walls.i_mid_left, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] != wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.i_mid_right, i, j);
	else if (g->map.map[i + 1][j] == wall && g->map.map[i - 1][j] != wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.b_mid_top, i, j);
	else if (g->map.map[i + 1][j] != wall && g->map.map[i - 1][j] == wall && g->map.map[i][j + 1] == wall && g->map.map[i][j - 1] == wall)
		display_image(g, g->texture.walls.b_mid_bot, i, j);
	else
		display_image(g, g->texture.walls.wall, i, j);
}

void	display_wall(t_game *g, int i, int j)
{
	if (i == 0 || i == g->map.map_heigth - 1 || j == 0 || j == g->map.map_width - 1)
		display_borders(g, i, j);
	else
		display_in_walls(g, i, j);
}

void	display_collectible(t_game *g, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche collectible closed == pas recup
	- affiche collectible open == recup
	*/
	display_image(g, g->texture.items.collect_closed, i, j);
}

void	display_exit_game(t_game *g, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche exit_closed == pas recup
	- affiche exit open == tout recup
	*/
	display_image(g, g->texture.items.exit_closed, i, j);
}

void	display_player(t_game *g, int i, int j)
{
	/*
		voir comment afficher les mouvements!! 
	*/
	display_image(g, g->texture.player.link, i, j);
}