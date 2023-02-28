/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:52:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/28 13:38:05 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	destroy_border_walls(t_game *g)
{
	if (g->txtr.t_walls.b_bot_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_bot_left);
	if (g->txtr.t_walls.b_bot_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_bot_right);
	if (g->txtr.t_walls.b_left_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_left_extr);
	if (g->txtr.t_walls.b_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_left);
	if (g->txtr.t_walls.b_mid_bot)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_mid_bot);
	if (g->txtr.t_walls.b_mid_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_mid_left);
	if (g->txtr.t_walls.b_mid_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_mid_right);
	if (g->txtr.t_walls.b_mid_top)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_mid_top);
	if (g->txtr.t_walls.b_right_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_right_extr);
	if (g->txtr.t_walls.b_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_right);
	if (g->txtr.t_walls.b_top_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_top_left);
	if (g->txtr.t_walls.b_top_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_top_right);
}

static void	destroy_spec_walls(t_game *g)
{
	if (g->txtr.t_walls.wall)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.wall);
	if (g->txtr.t_walls.column)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.column);
	if (g->txtr.t_walls.in_wall)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.in_wall);
	if (g->txtr.t_walls.b_left_s)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_left_s);
	if (g->txtr.t_walls.b_right_s)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.b_right_s);
	if (g->txtr.t_walls.left_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.left_extr);
	if (g->txtr.t_walls.right_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.right_extr);
}

static void	destroy_inner_walls(t_game *g)
{
	if (g->txtr.t_walls.i_bot_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_bot_extr);
	if (g->txtr.t_walls.i_bot_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_bot_left);
	if (g->txtr.t_walls.i_bot_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_bot_right);
	if (g->txtr.t_walls.i_mid_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_mid_left);
	if (g->txtr.t_walls.i_mid_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_mid_right);
	if (g->txtr.t_walls.i_mid_cross)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_mid_cross);
	if (g->txtr.t_walls.i_top_extr)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_top_extr);
	if (g->txtr.t_walls.i_top_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_top_left);
	if (g->txtr.t_walls.i_top_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_walls.i_top_right);
}

void	destroy_walls(t_game *g)
{
	destroy_border_walls(g);
	destroy_inner_walls(g);
	destroy_spec_walls(g);
}
