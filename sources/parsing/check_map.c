/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:27:03 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/17 15:56:37 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check_size(t_game *game)
{
	int	i;

	i = 0;
	game->map.map_width = ft_strlen(game->map.map[0]);
	while (game->map.map[i])
		i++;
	game->map.map_heigth = i;
	if (game->map.map_heigth == 0)
	{
		format_display_errors(no_map, game);
		free_and_exit(game);
	}
	if (game->map.map_heigth < 3 || game->map.map_width < 5)
		format_display_errors(bad_size, game);
}

static void	check_format(t_game *game)
{
	size_t	i;

	i = 0;
	while (game->map.map[i])
	{
		if (ft_strlen(game->map.map[i]) != game->map.map_width)
		{
			format_display_errors(bad_format, game);
			free_and_exit(game);
		}
		i++;
	}
}

static void	check_characters(t_game *game)
{
	collect_number_of_chars(game);
	if (game->map.player < 1)
		char_display_errors(no_player, game);
	if (game->map.player > 1)
		char_display_errors(too_much_player, game);
	if (game->map.collectibles <= 0)
		char_display_errors(no_collectibles, game);
	if (game->map.exit_game < 1)
		char_display_errors(no_exit, game);
	if (game->map.exit_game > 1)
		char_display_errors(too_much_exit, game);
	if (game->map.bad_char > 0)
		char_display_errors(have_bad_char, game);
}

static void	check_borders(t_game *game)
{
	check_top_bottom_borders(game);
	check_left_right_borders(game);
}

void	check_map(t_game *game)
{
	game->parse_error.is_valid = true;
	game->parse_error.top_border = true;
	game->parse_error.bot_border = true;
	game->parse_error.left_border = true;
	game->parse_error.right_border = true;
	check_size(game);
	check_format(game);
	check_characters(game);
	check_borders(game);
	check_solvability(game);
}
