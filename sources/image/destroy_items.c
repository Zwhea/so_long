/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:53:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/24 13:02:41 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	destroy_items(t_game *g)
{
	if (g->txtr.t_items.collect_closed)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.collect_closed);
	if (g->txtr.t_items.collect_open)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.collect_open);
	if (g->txtr.t_items.exit_closed)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.exit_closed);
	if (g->txtr.t_items.exit_open)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.exit_open);
	if (g->txtr.t_items.grass)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.grass);
}
