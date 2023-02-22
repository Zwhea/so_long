/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   items.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:24:08 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 18:36:43 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_items_get(t_game *g)
{
	g->txtr.items.grass = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/grass.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.items.collect_closed = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/collectible_closed.xpm",
			&g->txtr.img_w, &g->txtr.img_h);
	g->txtr.items.collect_open = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/collectible_open.xpm",
			&g->txtr.img_w, &g->txtr.img_h);
	g->txtr.items.exit_closed = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/exit_closed.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.items.exit_open = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/exit_open.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
