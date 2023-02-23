/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:59:53 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/23 17:07:22 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	motion_left(t_game *g)
{
	int	i;
	int	j;

	i = g->map.pos_y_player;
	j = g->map.pos_x_player;
	if (g->map.map[i][j - 1] != wall)
	{
		g->map.map[i][j] = space;
		display_image(g, g->txtr.items.grass, i, j);
		g->map.map[i][j - 1] = player;
		g->map.pos_x_player = j--;
		display_image(g, g->txtr.player.link, i, j);
		g->map.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.moves);
	}
}

static void	motion_right(t_game *g)
{
	int	i;
	int	j;

	i = g->map.pos_y_player;
	j = g->map.pos_x_player;
	if (g->map.map[i][j + 1] != wall)
	{
		g->map.map[i][j] = space;
		display_image(g, g->txtr.items.grass, i, j);
		g->map.map[i][j + 1] = player;
		g->map.pos_x_player = j++;
		display_image(g, g->txtr.player.link, i, j);
		g->map.moves++;
		ft_dprintf(1, BLUE"moves count ="END" %d\n", g->map.moves);
	}
}

int	key_press(t_keycode key_code, t_game *game)
{
	if (key_code == esc_key)
		end(game);
	else if (key_code == a_key || key_code == left_key)
		motion_left(game);
	else if (key_code == d_key || key_code == right_key)
		motion_right(game);
	return (0);
	// if (key_code == w_key || key_code == up_key)
		// motion_top(game);
	// if (key_code == s_key || key_code == down_key)
		// motion_bot(game);
}



// void	motion_top(t_game *g)
// {
	// 
// }
// 
// void	motion_bot(t_game *g)
// {
// 
// }
// 