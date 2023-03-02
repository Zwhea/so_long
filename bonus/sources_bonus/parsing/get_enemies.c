/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_enemies.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:04:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/02 16:18:53 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	collect_slimes_info(t_game *g)
{
	int	i;
	int	j;
	int	index;
	g->map.slimes.slimes_pos = ft_calloc(g->map.slimes.slimes, sizeof(t_slimes_pos));
	
	i = 0;
	index = 0;
	while (g->map.map[i])
	{
		j = 0;
		while (g->map.map[i][j])
		{
			if (g->map.map[i][j] == slimes)
			{
				g->map.slimes.slimes_pos[index].pos_y = i;
				g->map.slimes.slimes_pos[index].pos_x = j;
				ft_printf("index : %d y = %d\n", index, g->map.slimes.slimes_pos[index].pos_y);
				ft_printf("index : %d x = %d\n", index, g->map.slimes.slimes_pos[index].pos_x);
				index++;
			}
			j++;
		}
		i++;
	}
}
