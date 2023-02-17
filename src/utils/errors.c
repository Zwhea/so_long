/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:22:38 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 11:40:30 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"

void	display_char_errors(t_game *g, t_char_error status)
{
	if (g->error.is_valid)
	{
		ft_dprintf(2, RED"Error\n"END);
		g->error.is_valid = false;
	}
	if (status == no_player)
		warn(VERBOSE_NO_PLAYER);
	else if (status == no_collectibles)
		warn(VERBOSE_NO_COLLECTIBLE);
	else if (status == no_exit)
		warn(VERBOSE_NO_EXIT);
	else if (status == too_much_player)
		warn(VERBOSE_TOO_MUCH_PLAYER);
	else if (status == too_much_exit)
		warn(VERBOSE_TOO_MUCH_EXIT);
	else if (status == have_bad_char)
		warn(VERBOSE_BAD_CHAR);
	else if (status == bad_size)
		warn(VERBOSE_BAD_SIZE);
	else if (status == bad_format)
	{
		warn(VERBOSE_NOT_RECTANGLE);
		warn("please check carefully the map format before further tests.");
	}
}

void	display_wall_error(t_game *g, t_char_error status)
{
	if (g->error.is_valid)
	{
		ft_dprintf(2, RED"Error\n"END);
		g->error.is_valid = false;
	}
	if (status == top_border && g->error.top_border)
	{
		warn(VERBOSE_TOP_BORDER);
		g->error.top_border = false;
	}
	else if (status == bottom_border && g->error.bottom_border)
	{
		warn(VERBOSE_BOTTOM_BORDER);
		g->error.bottom_border = false;
	}
	else if (status == left_border && g->error.left_border)
	{
		warn(VERBOSE_LEFT_BORDER);
		g->error.left_border = false;
	}
	else if (status == right_border && g->error.right_border)
	{
		warn(VERBOSE_RIGHT_BORDER);
		g->error.right_border = false;
	}
}

void	display_unsolvable_error(t_game *g)
{
	if (g->error.is_valid)
		ft_dprintf(2, RED"Error\n"END);
	warn(VERBOSE_UNSOLVABLE);
	exit(1); //TODO replace with free_and_exit
}
