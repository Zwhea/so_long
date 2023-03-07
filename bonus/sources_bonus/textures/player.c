/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:23:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/07 11:03:35 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_player_get(t_game *g)
{
	g->txtr.t_player.link_left = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_left.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.t_player.link_right = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_right.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.t_player.link_back = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_back.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.t_player.link_collect = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_collect.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.t_player.link_exit = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_exit.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_hurt_left_player_get(t_game *g)
{
	g->txtr.link_left_hurt[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_left_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_left_hurt[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_left_hurt[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_left_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_left_hurt[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_left_hurt[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_left_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_left_hurt[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_hurt_right_player_get(t_game *g)
{
	g->txtr.link_right_hurt[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_right_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_right_hurt[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_right_hurt[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_right_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_right_hurt[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_right_hurt[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_right_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_right_hurt[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_hurt_down_player_get(t_game *g)
{
	g->txtr.link_down_hurt[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_down_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_down_hurt[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_down_hurt[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_down_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_down_hurt[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_down_hurt[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_down_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_down_hurt[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_hurt_up_player_get(t_game *g)
{
	g->txtr.link_up_hurt[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_up_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_up_hurt[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_up_hurt[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_up_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_up_hurt[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_up_hurt[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link_up_hurt.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.link_up_hurt[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
