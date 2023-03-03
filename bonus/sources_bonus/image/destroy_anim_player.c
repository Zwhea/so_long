/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_anim_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:07:01 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/03 11:53:21 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	destroy_idle_player(t_game *g)
{
	if (g->txtr.idle[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[0].sprite);
	if (g->txtr.idle[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[1].sprite);
	if (g->txtr.idle[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[2].sprite);
	if (g->txtr.idle[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[3].sprite);
	if (g->txtr.idle[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[4].sprite);
	if (g->txtr.idle[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle[5].sprite);
}

void	destroy_idle_left_player(t_game *g)
{
	if (g->txtr.idle_left[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[0].sprite);
	if (g->txtr.idle_left[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[1].sprite);
	if (g->txtr.idle_left[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[2].sprite);
	if (g->txtr.idle_left[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[3].sprite);
	if (g->txtr.idle_left[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[4].sprite);
	if (g->txtr.idle_left[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_left[5].sprite);
}

void	destroy_idle_right_player(t_game *g)
{
	if (g->txtr.idle_right[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[0].sprite);
	if (g->txtr.idle_right[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[1].sprite);
	if (g->txtr.idle_right[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[2].sprite);
	if (g->txtr.idle_right[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[3].sprite);
	if (g->txtr.idle_right[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[4].sprite);
	if (g->txtr.idle_right[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.idle_right[5].sprite);
}

void	destroy_mv_down_player(t_game *g)
{
	if (g->txtr.mv_down[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[0].sprite);
	if (g->txtr.mv_down[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[1].sprite);
	if (g->txtr.mv_down[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[2].sprite);
	if (g->txtr.mv_down[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[3].sprite);
	if (g->txtr.mv_down[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[4].sprite);
	if (g->txtr.mv_down[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[5].sprite);
	if (g->txtr.mv_down[6].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[6].sprite);
	if (g->txtr.mv_down[7].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[7].sprite);
	if (g->txtr.mv_down[8].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[8].sprite);
	if (g->txtr.mv_down[9].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_down[9].sprite);
}

void	destroy_mv_left_player(t_game *g)
{
	if (g->txtr.mv_left[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[0].sprite);
	if (g->txtr.mv_left[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[1].sprite);
	if (g->txtr.mv_left[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[2].sprite);
	if (g->txtr.mv_left[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[3].sprite);
	if (g->txtr.mv_left[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[4].sprite);
	if (g->txtr.mv_left[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[5].sprite);
	if (g->txtr.mv_left[6].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[6].sprite);
	if (g->txtr.mv_left[7].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[7].sprite);
	if (g->txtr.mv_left[8].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[8].sprite);
	if (g->txtr.mv_left[9].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_left[9].sprite);
}

void	destroy_mv_right_player(t_game *g)
{
	if (g->txtr.mv_right[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[0].sprite);
	if (g->txtr.mv_right[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[1].sprite);
	if (g->txtr.mv_right[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[2].sprite);
	if (g->txtr.mv_right[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[3].sprite);
	if (g->txtr.mv_right[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[4].sprite);
	if (g->txtr.mv_right[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[5].sprite);
	if (g->txtr.mv_right[6].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[6].sprite);
	if (g->txtr.mv_right[7].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[7].sprite);
	if (g->txtr.mv_right[8].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[8].sprite);
	if (g->txtr.mv_right[9].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_right[9].sprite);
}

void	destroy_mv_up_player(t_game *g)
{
	if (g->txtr.mv_up[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[0].sprite);
	if (g->txtr.mv_up[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[1].sprite);
	if (g->txtr.mv_up[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[2].sprite);
	if (g->txtr.mv_up[3].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[3].sprite);
	if (g->txtr.mv_up[4].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[4].sprite);
	if (g->txtr.mv_up[5].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[5].sprite);
	if (g->txtr.mv_up[6].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[6].sprite);
	if (g->txtr.mv_up[7].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[7].sprite);
	if (g->txtr.mv_up[8].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[8].sprite);
	if (g->txtr.mv_up[9].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.mv_up[9].sprite);
}
