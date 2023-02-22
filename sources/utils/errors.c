/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:30:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 15:33:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	format_display_errors(t_errors error_status, t_game *g)
{
	if (g->parse_error.is_valid == true)
	{
		ft_dprintf(2, RED"Error\n"END);
		g->parse_error.is_valid = false;
	}
	if (error_status == no_map)
		warn(VERBOSE_NO_MAP);
	if (error_status == bad_size)
		warn(VERBOSE_BAD_SIZE);
	if (error_status == bad_format)
	{
		warn(VERBOSE_NOT_RECTANGLE);
		warn(VERBOSE_PLEASE_CHECK);
	}
}

void	char_display_errors(t_errors error_status, t_game *g)
{
	if (g->parse_error.is_valid == true)
	{
		ft_dprintf(2, RED"Error\n"END);
		g->parse_error.is_valid = false;
	}
	if (error_status == no_player)
		warn(VERBOSE_NO_PLAYER);
	if (error_status == too_much_player)
		warn(VERBOSE_TOO_MUCH_PLAYER);
	if (error_status == no_collectibles)
		warn(VERBOSE_NO_COLLECTIBLE);
	if (error_status == no_exit)
		warn(VERBOSE_NO_EXIT);
	if (error_status == too_much_exit)
		warn(VERBOSE_TOO_MUCH_EXIT);
	if (error_status == have_bad_char)
		warn(VERBOSE_BAD_CHAR);
}

void	walls_display_errors(t_errors error_status, t_game *g)
{
	if (g->parse_error.is_valid == true)
	{
		ft_dprintf(2, RED"Error\n"END);
		g->parse_error.is_valid = false;
	}
	if (error_status == top_border && g->parse_error.top_border == true)
	{
		warn(VERBOSE_TOP_BORDER);
		g->parse_error.top_border = false;
	}
	if (error_status == bottom_border && g->parse_error.bot_border == true)
	{
		warn(VERBOSE_BOTTOM_BORDER);
		g->parse_error.bot_border = false;
	}
	if (error_status == left_border && g->parse_error.left_border == true)
	{
		warn(VERBOSE_LEFT_BORDER);
		g->parse_error.left_border = false;
	}
	if (error_status == right_border && g->parse_error.right_border == true)
	{
		warn(VERBOSE_RIGHT_BORDER);
		g->parse_error.right_border = false;
	}
}

void	unsolvable_display_errors(t_game *g)
{
	if (g->parse_error.is_valid == true)
		ft_dprintf(2, RED"Error\n"END);
	warn(VERBOSE_UNSOLVABLE);
	free_and_exit(g);
}
