/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:52:40 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/06 13:13:11 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	destroy_player(t_game *g)
{
	if (g->txtr.t_player.link_left)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_left);
	if (g->txtr.t_player.link_right)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_right);
	if (g->txtr.t_player.link_back)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_back);
	if (g->txtr.t_player.link_collect)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_collect);
	if (g->txtr.t_player.link_exit)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_exit);
}

void	destroy_player_hurt(t_game *g)
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