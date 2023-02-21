/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:24:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 19:29:39 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	xpm_b_leftbot_walls_get(t_game *g)
{
	g->texture.walls.b_bot_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_bot_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_left_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_left_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_mid_bot = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_mid_bot.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_mid_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_mid_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_top_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_top_left.xpm", IMG_WIDTH, IMG_HEIGHT);
}

void	xpm_b__righttop_walls_get(t_game *g)
{
	g->texture.walls.b_bot_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_bot_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_mid_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_mid_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_mid_top = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_mid_top.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_right_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_right_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.b_top_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/b_top_right.xpm", IMG_WIDTH, IMG_HEIGHT);
}

void	xpm_i_walls_get(t_game *g)
{
	g->texture.walls.i_bot_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_bot_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_bot_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_mid_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_mid_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_mid_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_mid_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.in_wall = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/in_wall.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.left_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/left_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.right_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/right_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.wall = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/wall.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.column = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/column.xpm", IMG_WIDTH, IMG_HEIGHT);
}

void	xpm_i_walls_get(t_game *g)
{
	g->texture.walls.i_bot_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_bot_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_bot_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_bot_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_mid_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_mid_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_mid_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_mid_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_left = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_left.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.i_top_right = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/i_top_right.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.in_wall = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/in_wall.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.left_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/left_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.right_extr = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/right_extr.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.wall = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/wall.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.walls.column = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/column.xpm", IMG_WIDTH, IMG_HEIGHT);
}
