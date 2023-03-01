/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slimes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:29:21 by twang             #+#    #+#             */
/*   Updated: 2023/03/01 17:34:47 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_bonus_mv_down_slimes_get(t_game *g)
{
	g->txtr.sl_mv_down[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_down[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_down[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_down[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_down[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_down[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_down05.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_left_slimes_get(t_game *g)
{
	g->txtr.sl_mv_left[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_left[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_left[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_left[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_left[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_left[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_left05.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_right_slimes_get(t_game *g)
{
	g->txtr.sl_mv_right[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_right[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_right[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_right[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_right[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_right[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_right05.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_up_slimes_get(t_game *g)
{
	g->txtr.sl_mv_up[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_up[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_up[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_up[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_up[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.sl_mv_up[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/slime_up05.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
