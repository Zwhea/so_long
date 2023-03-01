/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_slimes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:36:00 by twang             #+#    #+#             */
/*   Updated: 2023/03/01 17:45:23 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>


void	destroy_mv_down_slimes(t_game *g)
{
	if (g->txtr.sl_mv_down[0].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[0].sprite);
	if (g->txtr.sl_mv_down[1].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[1].sprite);
	if (g->txtr.sl_mv_down[2].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[2].sprite);
	if (g->txtr.sl_mv_down[3].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[3].sprite);
	if (g->txtr.sl_mv_down[4].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[4].sprite);
	if (g->txtr.sl_mv_down[5].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_down[5].sprite);
}

void	destroy_mv_left_slimes(t_game *g)
{
	if (g->txtr.sl_mv_left[0].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[0].sprite);
	if (g->txtr.sl_mv_left[1].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[1].sprite);
	if (g->txtr.sl_mv_left[2].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[2].sprite);
	if (g->txtr.sl_mv_left[3].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[3].sprite);
	if (g->txtr.sl_mv_left[4].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[4].sprite);
	if (g->txtr.sl_mv_left[5].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_left[5].sprite);
}

void	destroy_mv_right_slimes(t_game *g)
{
	if (g->txtr.sl_mv_right[0].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[0].sprite);
	if (g->txtr.sl_mv_right[1].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[1].sprite);
	if (g->txtr.sl_mv_right[2].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[2].sprite);
	if (g->txtr.sl_mv_right[3].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[3].sprite);
	if (g->txtr.sl_mv_right[4].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[4].sprite);
	if (g->txtr.sl_mv_right[5].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_right[5].sprite);
}

void	destroy_mv_up_slimes(t_game *g)
{
	if (g->txtr.sl_mv_up[0].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[0].sprite);
	if (g->txtr.sl_mv_up[1].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[1].sprite);
	if (g->txtr.sl_mv_up[2].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[2].sprite);
	if (g->txtr.sl_mv_up[3].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[3].sprite);
	if (g->txtr.sl_mv_up[4].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[4].sprite);
	if (g->txtr.sl_mv_up[5].sprite)
        mlx_destroy_image(g->set.mlx, g->txtr.sl_mv_up[5].sprite);
}
