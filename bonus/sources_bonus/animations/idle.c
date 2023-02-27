/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idle.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:41:02 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/27 21:11:25 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int    animate_static_player(t_game *g)
{   
    static int  frame;

    if (frame % 10000 == 0)
	{
		display_image(g, g->txtr.idle[frame / 10000].sprite,
			g->map.player.pos_y, g->map.player.pos_x);
	}
    frame++;
	if (frame >= 30000)
   		frame = 0;
    return (0);
}