/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:55:08 by twang             #+#    #+#             */
/*   Updated: 2023/02/24 16:29:19 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void    tile_is_space(t_game *g, int i, int j)
{
    g->map.map[i][j] = space;
	display_image(g, g->txtr.t_items.grass, i, j);
	g->map.map[i][j - 1] = player;
	g->map.player.pos_x--;
	display_image(g, g->txtr.t_player.link, i, j - 1);
}

void    tile_is_closed_collect(t_game *g, int i, int j)
{
    g->map.map[i][j] = player;
	display_image(g, g->txtr.t_player.link, i, j);
	g->map.map[i][j - 1] = open_collect;
	display_image(g, g->txtr.t_items.collect_open, i, j - 1);
	g->map.items.collectibles--;
}

void    tile_is_open_collect(t_game *g, int i, int j)
{
    g->map.map[i][j] = player;
	display_image(g, g->txtr.t_player.link, i, j);
	g->map.map[i][j - 1] = open_collect;
	display_image(g, g->txtr.t_items.collect_open, i, j - 1);
}

void    tile_is_exit(t_game *g, int i, int j)
{
    g->map.map[i][j] = player;
	display_image(g, g->txtr.t_player.link, i, j);
	g->map.map[i][j - 1] = player;
}
