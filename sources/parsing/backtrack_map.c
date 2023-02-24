/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:42:12 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/24 13:06:12 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	backtracking(t_game *game, int x, int y)
{
	if (game->map.fake_map[x][y - 1] != wall)
	{
		game->map.fake_map[x][y - 1] = wall;
		backtracking(game, x, y - 1);
	}
	if (game->map.fake_map[x - 1][y] != wall)
	{
		game->map.fake_map[x - 1][y] = wall;
		backtracking(game, x - 1, y);
	}
	if (game->map.fake_map[x][y + 1] != wall)
	{
		game->map.fake_map[x][y + 1] = wall;
		backtracking(game, x, y + 1);
	}
	if (game->map.fake_map[x + 1][y] != wall)
	{
		game->map.fake_map[x + 1][y] = wall;
		backtracking(game, x + 1, y);
	}
	game->map.fake_map[x][y] = wall;
}

void	check_solvability(t_game *game)
{
	int		i;
	int		j;

	if (game->parse_error.is_valid == false)
		unsolvable_display_errors(game);
	j = game->map.player.pos_x;
	i = game->map.player.pos_y;
	backtracking(game, i, j);
	i = 0;
	while (game->map.fake_map[i])
	{
		j = 0;
		while (game->map.fake_map[i][j])
		{
			if (game->map.fake_map[i][j] == exit_game
				|| game->map.fake_map[i][j] == collectible)
				unsolvable_display_errors(game);
			j++;
		}
		i++;
	}
	ft_free((void **)game->map.fake_map, game->map.map_heigth);
}
