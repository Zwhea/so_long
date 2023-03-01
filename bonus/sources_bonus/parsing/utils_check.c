/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:45:49 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/01 17:24:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static bool	valid_char(char c)
{
	if (c == space || c == wall || c == collectible || c == exit_game
		|| c == player || c == slimes)
		return (true);
	return (false);
}

static void	check_char(t_game *game, char c)
{
	if (c == player)
		game->map.player.player += 1;
	else if (c == slimes)
		game->map.slimes.slimes += 1;
	else if (c == collectible)
		game->map.items.collectibles += 1;
	else if (c == exit_game)
		game->map.items.exit_game += 1;
	else if (!valid_char(c))
		game->map.items.bad_char += 1;
}

void	collect_number_of_chars(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.map[i])
	{
		j = 0;
		while (game->map.map[i][j])
		{
			check_char(game, game->map.map[i][j]);
			if (game->map.map[i][j] == player)
			{
				game->map.player.pos_y = i;
				game->map.player.pos_x = j;
			}
			if (game->map.map[i][j] == exit_game)
			{
				game->map.items.ext_pos_y = i;
				game->map.items.ext_pos_x = j;
			}
			j++;
		}
		i++;
	}
}

void	check_top_bottom_borders(t_game *game)
{
	size_t	i;

	i = 0;
	while (game->map.map[0][i])
	{
		if (game->map.map[0][i] != wall)
			walls_display_errors(top_border, game);
		if (game->map.map[game->map.map_heigth - 1][i] != wall)
			walls_display_errors(bottom_border, game);
		i++;
	}
}

void	check_left_right_borders(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.map_heigth)
	{
		if (game->map.map[i][0] != wall)
			walls_display_errors(left_border, game);
		if (game->map.map[i][game->map.map_width - 1] != wall)
			walls_display_errors(right_border, game);
		i++;
	}
}
