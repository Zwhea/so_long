/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:20:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/06 16:44:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	destroy_animations_images(t_game *g)
{
	destroy_idle_player(g);
	destroy_idle_left_player(g);
	destroy_idle_right_player(g);
	destroy_mv_down_player(g);
	destroy_mv_left_player(g);
	destroy_mv_right_player(g);
	destroy_mv_up_player(g);
	destroy_mv_down_slimes(g);
	destroy_mv_left_slimes(g);
	destroy_mv_right_slimes(g);
	destroy_mv_up_slimes(g);
	destroy_player_hurt(g);
}

static void	destroy_images(t_game *g)
{
	destroy_items(g);
	destroy_hearts(g);
	destroy_player(g);
	destroy_walls(g);
	destroy_animations_images(g);
}

int	end(t_game *g)
{
	ft_free((void **)g->map.map, g->map.map_heigth);
	free(g->map.slimes.slimes_pos);
	destroy_images(g);
	if (g->set.window)
		mlx_destroy_window(g->set.mlx, g->set.window);
	mlx_destroy_display(g->set.mlx);
	free(g->set.mlx);
	exit(0);
}
