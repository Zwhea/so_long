/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:05:12 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 12:13:23 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/so_long.h"

static void	check_size(t_game *g)
{
	g->map.size.x = ft_strlen(g->map.map[0]);
	if (g->map.size.y < 3 || g->map.size.x < 5)
		display_char_errors(g, bad_size);
}

static void	check_format(t_game *g)
{
	uint32_t	i;
	uint32_t	size;

	i = 0;
	g->map.size.x = ft_strlen(g->map.map[0]);
	while (g->map.map[i])
	{
		size = ft_strlen(g->map.map[i]);
		if (g->map.size.x != size)
		{
			display_char_errors(g, bad_format);
			exit(1); //TODO replace with free_and_exit
		}
		i++;
	}
}

static void	check_characters(t_game *g)
{
	fill_map_items(g);
	if (g->map.items.nb_players < 1)
		display_char_errors(g, no_player);
	if (g->map.items.nb_players > 1)
		display_char_errors(g, too_much_player);
	if (g->map.items.nb_collectibles < 1)
		display_char_errors(g, no_collectibles);
	if (g->map.items.nb_exits < 1)
		display_char_errors(g, no_exit);
	if (g->map.items.nb_exits > 1)
		display_char_errors(g, too_much_exit);
	if (g->map.items.nb_bad_char > 0)
		display_char_errors(g, have_bad_char);
}

static void	check_borders(t_game *g)
{
	uint32_t	i;

	i = 0;
	while (i < g->map.size.x)
	{
		if (is_wall(g->map.map[0][i]) == false)
			display_wall_error(g, top_border);
		if (is_wall(g->map.map[g->map.size.y - 1][i]) == false)
			display_wall_error(g, bottom_border);
		i++;
	}
	i = 0;
	while (i < g->map.size.y)
	{
		if (is_wall(g->map.map[i][0]) == false)
			display_wall_error(g, left_border);
		if (is_wall(g->map.map[i][g->map.size.x - 1]) == false)
			display_wall_error(g, right_border);
		i++;
	}
}

void	check_map(t_game *g)
{
	check_size(g);
	check_format(g);
	check_characters(g);
	check_borders(g);
	check_solvability(g);
}
