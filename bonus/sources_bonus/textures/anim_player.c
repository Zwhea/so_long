/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:25:05 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/28 13:41:51 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	xpm_bonus_idle_player_get(t_game *g)
{
	g->txtr.idle[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.idle[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.idle[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/link02.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_down_player_get(t_game *g)
{
	g->txtr.mv_down[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down05.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[6].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down06.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[7].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down07.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[8].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down08.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_down[9].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_down09.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_left_player_get(t_game *g)
{
	g->txtr.mv_left[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left05.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[6].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left06.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[7].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left07.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[8].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left08.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_left[9].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_left09.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_right_player_get(t_game *g)
{
	g->txtr.mv_right[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right05.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[6].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right06.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[7].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right07.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[8].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right08.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_right[9].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_right09.xpm", &g->txtr.img_w, &g->txtr.img_h);
}

void	xpm_bonus_mv_up_player_get(t_game *g)
{
	g->txtr.mv_up[0].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up00.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[1].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up01.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[2].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up02.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[3].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up03.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[4].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up04.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[5].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up05.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[6].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up06.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[7].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up07.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[8].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up08.xpm", &g->txtr.img_w, &g->txtr.img_h);
	g->txtr.mv_up[9].sprite = mlx_xpm_file_to_image(g->set.mlx,
			"./assets/xpm/mv_up09.xpm", &g->txtr.img_w, &g->txtr.img_h);
}
