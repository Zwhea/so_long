/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:24:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/23 13:09:51 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_b_leftbot_walls_get(t_game *g)
{
	g->txtr.walls.b_bot_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_bot_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_left_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_left_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_mid_bot = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_mid_bot.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_mid_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_mid_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_top_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_top_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_b_righttop_walls_get(t_game *g)
{
	g->txtr.walls.b_bot_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_bot_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_mid_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_mid_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_mid_top = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_mid_top.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_right_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_right_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.b_top_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/b_top_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_mid_cross = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_mid_cross.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_i_leftbot_walls_get(t_game *g)
{
	g->txtr.walls.i_bot_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_bot_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_bot_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_mid_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_mid_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_mid_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_mid_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.in_wall = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/in_wall.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.wall = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/wall.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.column = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/column.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.left_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/left_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_i_righttop_walls_get(t_game *g)
{
	g->txtr.walls.i_bot_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_bot_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_bot_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_bot_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_mid_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_mid_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_mid_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_mid_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.i_top_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/i_top_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.in_wall = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/in_wall.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.wall = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/wall.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.column = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/column.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.walls.right_extr = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/right_extr.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
