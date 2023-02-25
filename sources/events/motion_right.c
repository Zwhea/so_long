/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion_right.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:34:42 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/25 23:46:12 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	right_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_x++;
	display_image(g, g->txtr.t_player.link_right, i, j + 1);
}

void	right_tile_is_closed_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.map[i][j + 1] = open_collect;
	g->map.player.pos_x++;
	display_image(g, g->txtr.t_player.link_collect, i, j + 1);
	g->map.items.collectibles--;
	if (g->map.items.collectibles == 0)
		display_image(g, g->txtr.t_items.exit_open, g->map.items.ext_pos_y,
			g->map.items.ext_pos_x);
}

void	right_tile_is_open_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_x++;
	display_image(g, g->txtr.t_player.link_collect, i, j + 1);
}

void	right_tile_is_exit(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_x++;
	if (g->map.items.collectibles > 0)
		display_image(g, g->txtr.t_player.link_exit, i, j + 1);
	else
	{
		display_image(g, g->txtr.t_player.link_o_exit, i, j + 1);
		g->end = true;
		win(g);
	}
}
