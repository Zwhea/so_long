/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:53:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/03/06 11:25:56 by twang            ###   ########.fr       */
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
	if (g->txtr.t_items.you_won)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.you_won);
	if (g->txtr.t_items.game_over)
		mlx_destroy_image(g->set.mlx, g->txtr.t_items.game_over);
}

void	destroy_hearts(t_game *g)
{
	if (g->txtr.hearts[0].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.hearts[0].sprite);
	if (g->txtr.hearts[1].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.hearts[1].sprite);
	if (g->txtr.hearts[2].sprite)
		mlx_destroy_image(g->set.mlx, g->txtr.hearts[2].sprite);
}
