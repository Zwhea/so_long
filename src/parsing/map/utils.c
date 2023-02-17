/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:43 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 12:26:10 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/so_long.h"

static void	set_item(t_game *g, char c)
{
	if (is_player(c))
		g->map.items.nb_players++;
	else if (is_collectible(c))
		g->map.items.nb_collectibles++;
	else if (is_exit(c))
		g->map.items.nb_exits++;
	else if (is_valid_char(c) == false)
		g->map.items.nb_bad_char++;
}

void	fill_map_items(t_game *g)
{
	uint32_t	i;
	uint32_t	j;

	i = 0;
	while (g->map.map[i])
	{
		j = 0;
		while (g->map.map[i][j])
		{
			set_item(g, g->map.map[i][j]);
			if (is_player(g->map.map[i][j]))
			{
				g->map.player.pos.x = j;
				g->map.player.pos.y = i;
			}
			j++;
		}
		i++;
	}
}
