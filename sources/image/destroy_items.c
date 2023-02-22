/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:53:09 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/22 22:05:51 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	destroy_items(t_game *g)
{
	if (g->txtr.items.collect_closed)
		mlx_destroy_image(g->set.mlx, g->txtr.items.collect_closed);
	if (g->txtr.items.collect_open)
		mlx_destroy_image(g->set.mlx, g->txtr.items.collect_open);
	if (g->txtr.items.exit_closed)
		mlx_destroy_image(g->set.mlx, g->txtr.items.exit_closed);
	if (g->txtr.items.exit_open)
		mlx_destroy_image(g->set.mlx, g->txtr.items.exit_open);
	if (g->txtr.items.grass)
		mlx_destroy_image(g->set.mlx, g->txtr.items.grass);
}
