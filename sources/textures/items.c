/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   items.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:24:08 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 19:24:43 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"\

void	xpm_items_get(t_game *g)
{
	g->texture.items.grass = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/grass.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.items.collect_closed = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/collectible_closed.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.items.collect_open = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/collectible_open.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.items.exit_closed = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/exit_closed.xpm", IMG_WIDTH, IMG_HEIGHT);
	g->texture.items.exit_open = mlx_xpm_file_to_image(g->set.mlx,
		"./assets/xpm/exit_open.xpm", IMG_WIDTH, IMG_HEIGHT);
}