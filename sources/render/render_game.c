/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:38:48 by twang             #+#    #+#             */
/*   Updated: 2023/02/22 21:46:47 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

static void	render_core(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map.map[i])
	{
		j = 0;
		while (game->map.map[i][j])
		{
			display_image(game, game->txtr.items.grass, i, j);
			if (game->map.map[i][j] == wall)
				display_walls(game, i, j);
			if (game->map.map[i][j] == collectible)
				display_collectible(game, i, j);
			if (game->map.map[i][j] == exit_game)
				display_exit_game(game, i, j);
			if (game->map.map[i][j] == player)
				display_player(game, i, j);
			j++;
		}
		i++;
	}
}

void	render_game(t_game *game)
{
	init_set(game);
	render_core(game);
	mlx_hook(game->set.window, 17, 1L<<17, end, game);
	mlx_loop(game->set.mlx);
}
