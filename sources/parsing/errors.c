/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:30:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/07 11:37:11 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	char_display_errors(t_errors error_status, t_game *game)
{
	if (game->parse_error.is_valid == true)
	{
		ft_dprintf(2, "Error\n");
		game->parse_error.is_valid = false;
	}
	if (error_status == no_player)
		ft_dprintf(2, "warning: the map should have one player.\n");
	if (error_status == too_much_player)
		ft_dprintf(2, "warning: the map should have only one player.\n");
	if (error_status == no_collectibles)
		ft_dprintf(2, "warning: the map should have collectibles.\n");
	if (error_status == no_exit)
		ft_dprintf(2, "warning: the map should have one exit.\n");
	if (error_status == too_much_exit)
		ft_dprintf(2, "warning: the map should have only one exit.\n");
	if (error_status == have_bad_char)
		ft_dprintf(2, "warning: the map contains unrecognized characters.\n");
	if (error_status == bad_size)
		ft_dprintf(2, "warning: the map is too small.\n");
	if (error_status == bad_format)
	{
		ft_dprintf(2, "warning: the map should be a rectangle.\n");
		ft_dprintf(2, "warning: please check carefully the map format ");
		ft_dprintf(2, "before further tests.\n");
	}
}

void	walls_display_errors(t_errors error_status, t_game *game)
{
	if (game->parse_error.is_valid == true)
	{
		ft_dprintf(2, "Error\n");
		game->parse_error.is_valid = false;
	}
	if (error_status == top_border && game->parse_error.top_border == true)
	{
		ft_dprintf(2, "warning: the top border of the map is uncomplete.\n");
		game->parse_error.top_border = false;
	}
	if (error_status == bottom_border && game->parse_error.bot_border == true)
	{
		ft_dprintf(2, "warning: the bottom border of the map is uncomplete.\n");
		game->parse_error.bot_border = false;
	}
	if (error_status == left_border && game->parse_error.left_border == true)
	{
		ft_dprintf(2, "warning: the left border of the map is uncomplete.\n");
		game->parse_error.left_border = false;
	}
	if (error_status == right_border && game->parse_error.right_border == true)
	{
		ft_dprintf(2, "warning: the right border of the map is uncomplete.\n");
		game->parse_error.right_border = false;
	}
}

void	unsolvable_display_errors(t_game *game)
{
	if (game->parse_error.is_valid == true)
		ft_dprintf(2, "Error\n");
	ft_dprintf(2, "warning: the map in unsolvable.\n");
	free_and_exit(game);
}
