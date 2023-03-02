/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idle.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:41:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/02 18:25:22 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int	animate_static_player(t_game *g)
{
	static int	frame;
	int			i;
	int			j;
	
	i = g->map.player.pos_y;
	j = g->map.player.pos_x;
	if (frame % 10000 == 0)
	{
		if (g->map.map[i][j] == space || g->map.map[i][j] == player)
		{
			if (g->directions.down == true || g->map.player.moves == 0)
			{
				display_image(g, g->txtr.idle[frame / 10000].sprite,
					i, j);
			}
			else if (g->directions.left == true)
			{
				display_image(g, g->txtr.idle_left[frame / 10000].sprite,
					i, j);
			}
			// else if (g->directions.right == true)
			// {
				// display_image(g, g->txtr.idle_right[frame / 10000].sprite,
					// i, j);
			// }
		}
	}
	frame++;
	if (frame >= 30000)
		frame = 0;
	return (0);
}
