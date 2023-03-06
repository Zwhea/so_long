/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:52:40 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/04 13:09:12 by wangthea         ###   ########.fr       */
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
	if (g->txtr.t_player.link_hurt)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link_hurt);
}
