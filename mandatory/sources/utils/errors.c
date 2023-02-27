/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:30:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/23 13:17:30 by wangthea         ###   ########.fr       */
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
		warn(VERBS_NO_MAP);
	if (error_status == bad_size)
		warn(VERBS_BAD_SIZE);
	if (error_status == bad_format)
	{
		warn(VERBS_NOT_RECTANGLE);
		warn(VERBS_CHK);
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
		warn(VERBS_NO_PLAYER);
	if (error_status == too_much_player)
		warn(VERBS_TOO_MUCH_PLAYER);
	if (error_status == no_collectibles)
		warn(VERBS_NO_COLLECTIBLE);
	if (error_status == no_exit)
		warn(VERBS_NO_EXIT);
	if (error_status == too_much_exit)
		warn(VERBS_TOO_MUCH_EXIT);
	if (error_status == have_bad_char)
		warn(VERBS_BAD_CHAR);
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
		warn(VERBS_TOP_BORDER);
		g->parse_error.top_border = false;
	}
	if (error_status == bottom_border && g->parse_error.bot_border == true)
	{
		warn(VERBS_BOTTOM_BORDER);
		g->parse_error.bot_border = false;
	}
	if (error_status == left_border && g->parse_error.left_border == true)
	{
		warn(VERBS_LEFT_BORDER);
		g->parse_error.left_border = false;
	}
	if (error_status == right_border && g->parse_error.right_border == true)
	{
		warn(VERBS_RIGHT_BORDER);
		g->parse_error.right_border = false;
	}
}

void	unsolvable_display_errors(t_game *g)
{
	if (g->parse_error.is_valid == true)
		ft_dprintf(2, RED"Error\n"END);
	warn(VERBS_UNSOLVABLE);
	free_and_exit(g);
}
