/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:59:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/24 16:28:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	motion_left(t_game *g)
{
	int	i;
	int	j;

	i = g->map.player.pos_y;
	j = g->map.player.pos_x;
	if (g->map.map[i][j - 1] != wall)
	{
		if (g->map.items.collectibles == 0)
		{
			display_image(g, g->txtr.t_items.exit_open, i, j - 1);
		}
		if (g->map.map[i][j - 1] == space)
			tile_is_space(g, i, j);
		if (g->map.map[i][j - 1] == collectible)
			tile_is_closed_collect(g, i, j);
		if (g->map.map[i][j - 1] == open_collect)
			tile_is_open_collect(g, i, j);
		if (g->map.map[i][j - 1] == exit_game)
			tile_is_exit(g, i, j);
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
	}
}

static void	motion_right(t_game *g)
{
	int	i;
	int	j;

	i = g->map.player.pos_y;
	j = g->map.player.pos_x;
	if (g->map.map[i][j + 1] != wall)
	{
		g->map.map[i][j] = space;
		display_image(g, g->txtr.t_items.grass, i, j);
		g->map.map[i][j + 1] = player;
		g->map.player.pos_x++;
		display_image(g, g->txtr.t_player.link, i, j + 1);
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
	}
}

static void	motion_top(t_game *g)
{
	int	i;
	int	j;

	i = g->map.player.pos_y;
	j = g->map.player.pos_x;
	if (g->map.map[i - 1][j] != wall)
	{
		g->map.map[i][j] = space;
		display_image(g, g->txtr.t_items.grass, i, j);
		g->map.map[i - 1][j] = player;
		g->map.player.pos_y--;
		display_image(g, g->txtr.t_player.link, i - 1, j);
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
	}
}

static void	motion_bot(t_game *g)
{
	int	i;
	int	j;

	i = g->map.player.pos_y;
	j = g->map.player.pos_x;
	if (g->map.map[i + 1][j] != wall)
	{
		g->map.map[i][j] = space;
		display_image(g, g->txtr.t_items.grass, i, j);
		g->map.map[i + 1][j] = player;
		g->map.player.pos_y++;
		display_image(g, g->txtr.t_player.link, i + 1, j);
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
	}
}

int	key_press(t_keycode key_code, t_game *game)
{
	if (key_code == esc_key)
		end(game);
	else if (key_code == a_key || key_code == left_key)
		motion_left(game);
	else if (key_code == d_key || key_code == right_key)
		motion_right(game);
	if (key_code == w_key || key_code == up_key)
		motion_top(game);
	if (key_code == s_key || key_code == down_key)
		motion_bot(game);
	return (0);
}
