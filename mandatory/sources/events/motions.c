/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:59:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/25 23:47:30 by wangthea         ###   ########.fr       */
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
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
		if (g->map.map[i][j - 1] == collectible)
			left_tile_is_closed_collect(g, i, j);
		else if (g->map.map[i][j - 1] == open_collect)
			left_tile_is_open_collect(g, i, j);
		else if (g->map.map[i][j - 1] == exit_game)
			left_tile_is_exit(g, i, j);
		else
			left_tile_is_space(g, i, j);
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
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
		if (g->map.map[i][j + 1] == collectible)
			right_tile_is_closed_collect(g, i, j);
		else if (g->map.map[i][j + 1] == open_collect)
			right_tile_is_open_collect(g, i, j);
		else if (g->map.map[i][j + 1] == exit_game)
			right_tile_is_exit(g, i, j);
		else
			right_tile_is_space(g, i, j);
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
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
		if (g->map.map[i - 1][j] == collectible)
			top_tile_is_closed_collect(g, i, j);
		else if (g->map.map[i - 1][j] == open_collect)
			top_tile_is_open_collect(g, i, j);
		else if (g->map.map[i - 1][j] == exit_game)
			top_tile_is_exit(g, i, j);
		else
			top_tile_is_space(g, i, j);
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
		g->map.player.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.player.moves);
		if (g->map.map[i + 1][j] == collectible)
			bot_tile_is_closed_collect(g, i, j);
		else if (g->map.map[i + 1][j] == open_collect)
			bot_tile_is_open_collect(g, i, j);
		else if (g->map.map[i + 1][j] == exit_game)
			bot_tile_is_exit(g, i, j);
		else
			bot_tile_is_space(g, i, j);
	}
}

int	key_press(t_keycode key_code, t_game *game)
{
	if (key_code == esc_key)
		end(game);
	if (game->end == true)
		return (0);
	if (key_code == a_key || key_code == left_key)
		motion_left(game);
	else if (key_code == d_key || key_code == right_key)
		motion_right(game);
	else if (key_code == w_key || key_code == up_key)
		motion_top(game);
	else if (key_code == s_key || key_code == down_key)
		motion_bot(game);
	return (0);
}
