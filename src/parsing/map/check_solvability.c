/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solvability.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:10:16 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 12:19:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/so_long.h"

static void	backtracking(t_game *g, uint32_t x, uint32_t y)
{
	if (is_wall(g->map.fake_map[y][x - 1]) == false)
	{
		g->map.fake_map[y][x - 1] = wall;
		backtracking(g, x - 1, y);
	}
	if (is_wall(g->map.fake_map[y][x + 1]) == false)
	{
		g->map.fake_map[y][x + 1] = wall;
		backtracking(g, x + 1, y);
	}
	if (is_wall(g->map.fake_map[y - 1][x]) == false)
	{
		g->map.fake_map[y - 1][x] = wall;
		backtracking(g, x, y - 1);
	}
	if (is_wall(g->map.fake_map[y + 1][x]) == false)
	{
		g->map.fake_map[y + 1][x] = wall;
		backtracking(g, x, y + 1);
	}
	g->map.fake_map[y][x] = wall;
}

void	check_solvability(t_game *g)
{
	uint32_t	i;
	uint32_t	j;

	if (g->error.is_valid == false)
		display_unsolvable_error(g);
	i = g->map.player.pos.y;
	j = g->map.player.pos.x;
	backtracking(g, j, i);
	i = 0;
	while (i < g->map.size.y)
	{
		j = 0;
		while (j < g->map.size.x)
		{
			if (is_exit(g->map.fake_map[i][j])
				|| is_collectible(g->map.fake_map[i][j]))
				display_unsolvable_error(g);
			j++;
		}
		i++;
	}
	ft_free((void **) g->map.fake_map, g->map.size.y);
}
