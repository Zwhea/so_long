/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:19:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/27 13:48:09 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	top_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y--;
	display_image(g, g->txtr.t_player.link_back, i - 1, j);
}

void	top_tile_is_closed_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.map[i - 1][j] = open_collect;
	g->map.player.pos_y--;
	display_image(g, g->txtr.t_player.link_collect, i - 1, j);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image(g, g->txtr.t_items.exit_open, g->map.items.ext_pos_y,
			g->map.items.ext_pos_x);
}

void	top_tile_is_open_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y--;
	display_image(g, g->txtr.t_player.link_collect, i - 1, j);
}

void	top_tile_is_exit(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y--;
	if (g->map.items.collectibles > 0)
		display_image(g, g->txtr.t_player.link_exit, i - 1, j);
	else
	{
		g->end = true;
		win(g);
	}
}
