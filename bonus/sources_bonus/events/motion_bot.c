/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion_bot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:26:51 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/04 13:16:41 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	bot_tile_is_space(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y++;
	display_image(g, g->txtr.idle[0].sprite, i + 1, j);
}

void	bot_tile_is_closed_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.map[i + 1][j] = open_collect;
	g->map.player.pos_y++;
	display_image(g, g->txtr.t_player.link_collect, i + 1, j);
	g->map.items.collectibles--;
	if (g->map.player.lifes < 3)
		g->map.player.lifes++;
	ft_printf("lifes : %d\n", g->map.player.lifes);
	if (g->map.items.collectibles == 0)
		display_image(g, g->txtr.t_items.exit_open, g->map.items.ext_pos_y,
			g->map.items.ext_pos_x);
}

void	bot_tile_is_open_collect(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y++;
	display_image(g, g->txtr.t_player.link_collect, i + 1, j);
}

void	bot_tile_is_slime(t_game *g, int i, int j)
{
	g->directions.hurt = true;
	check_tiles(g, i, j);
	display_image(g, g->txtr.t_player.link_hurt, i + 1, j);
	g->map.player.pos_y++;
	g->map.player.lifes--;
	ft_printf("lifes : %d\n", g->map.player.lifes);
	if (g->map.player.lifes == 0)
	{
		g->end = true;
		lose(g);
	}
}

void	bot_tile_is_exit(t_game *g, int i, int j)
{
	check_tiles(g, i, j);
	g->map.player.pos_y++;
	if (g->map.items.collectibles > 0)
		display_image(g, g->txtr.t_player.link_exit, i + 1, j);
	else
	{
		g->end = true;
		win(g);
	}
}
