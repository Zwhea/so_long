/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:38:48 by twang             #+#    #+#             */
/*   Updated: 2023/02/27 21:01:36 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	render_core(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.map[i])
	{
		j = 0;
		while (game->map.map[i][j])
		{
			display_image(game, game->txtr.t_items.grass, i, j);
			if (game->map.map[i][j] == wall)
				display_walls(game, i, j);
			if (game->map.map[i][j] == collectible)
				display_image(game, game->txtr.t_items.collect_closed, i, j);
			if (game->map.map[i][j] == exit_game)
				display_image(game, game->txtr.t_items.exit_closed, i, j);
			if (game->map.map[i][j] == player)
				display_image(game, game->txtr.t_player.link, i, j);
			j++;
		}
		i++;
	}
}

void	render_game(t_game *game)
{
	init_set(game);
	render_core(game);
	mlx_hook(game->set.window, 17, 1L << 17, end, game);
	mlx_key_hook(game->set.window, key_press, game);
	mlx_loop_hook(game->set.mlx, animate_static_player, game);
	mlx_loop(game->set.mlx);
}
