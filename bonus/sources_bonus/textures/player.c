/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:23:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/28 11:25:26 by wangthea         ###   ########.fr       */
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
