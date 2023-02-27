/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:20:23 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/27 15:09:51 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	destroy_images(t_game *g)
{
	destroy_items(g);
	destroy_player(g);
	destroy_walls(g);
}

int	end(t_game *g)
{
	ft_free((void **)g->map.map, g->map.map_heigth);
	destroy_images(g);
	if (g->set.window)
		mlx_destroy_window(g->set.mlx, g->set.window);
	mlx_destroy_display(g->set.mlx);
	free(g->set.mlx);
	exit(0);
}
