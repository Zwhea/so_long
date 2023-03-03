/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idle.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:41:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/03 10:54:53 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static int	animate_static_player(t_game *g)
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

static int	animate_static_slimes(t_game *g)
{
	static int	frame;
	int			i;
	int			j;
	int			index;
	
	index = 0;
	while (index < g->map.slimes.slimes)
	{
		i = g->map.slimes.slimes_pos[index].pos_y;
		j = g->map.slimes.slimes_pos[index].pos_x;
		if (frame % 1000 == 0)
			display_image(g, g->txtr.sl_mv_down[frame / 1000].sprite, i, j);
		ft_printf("index : %d\n", index);
		index++;
	}
	frame++;
	if (frame >= 6000)
		frame = 0;
	return (0);
}

int	animations(t_game *g)
{
	animate_static_player(g);
	if (g->map.slimes.slimes > 0)
		animate_static_slimes(g);
	return (0);
}