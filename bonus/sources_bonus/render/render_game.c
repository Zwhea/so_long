/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:38:48 by twang             #+#    #+#             */
/*   Updated: 2023/03/02 16:24:36 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	display_string(t_game *g)
{
	char	*steps;
	char	*collectibles_left;
	int		width;
	int		heigth;
	int		i;
	
	steps = ft_itoa(g->map.player.moves);
	collectibles_left = ft_itoa(g->map.items.collectibles);
	width = g->map.map_width + 2;
	heigth = g->map.map_heigth + 2;
	i = 1;
	while (i < width - 1)
	{
		mlx_put_image_to_window(g->set.mlx, g->set.window,
			g->txtr.t_items.grass, IMG_WIDTH * i, IMG_HEIGHT * (heigth - 1));
		i++;
	}
	mlx_string_put(g->set.mlx, g->set.window, 144,
		(heigth * 96) - 48, 0xFFFFFF, "Moves count =");
	mlx_string_put(g->set.mlx, g->set.window, 256,
		(heigth * 96) - 48, 0xFFFFFF, steps);
	mlx_string_put(g->set.mlx, g->set.window, g->set.win_width - 96,
		(heigth * 96) - 48, 0xFFFFFF, collectibles_left);
	mlx_string_put(g->set.mlx, g->set.window, g->set.win_width - 64,
		(heigth * 96) - 48, 0xFFFFFF, "Collectibles left");
	free(steps);
	free(collectibles_left);
	steps = NULL;
	collectibles_left = NULL;
}

static void	display_background(t_game *game)
{
	int	i;
	int j;
	int	width;
	int	heigth;
	
	i = 0;
	width = game->map.map_width + 2;
	heigth = game->map.map_heigth + 2;
	while (i < heigth)
	{
		j = 0;
		while (j < width)
		{
			mlx_put_image_to_window(game->set.mlx, game->set.window,
				game->txtr.t_items.grass, IMG_WIDTH * j, IMG_HEIGHT * i);
			j++;
		}
		i++;
	}
}

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
			if (game->map.map[i][j] == wall)
				display_walls(game, i, j);
			if (game->map.map[i][j] == collectible)
				display_image(game, game->txtr.t_items.collect_closed, i, j);
			if (game->map.map[i][j] == exit_game)
				display_image(game, game->txtr.t_items.exit_closed, i, j);
			if (game->map.map[i][j] == player)
				display_image(game, game->txtr.idle[0].sprite, i, j);
			if (game->map.map[i][j] == slimes)
				display_image(game, game->txtr.sl_mv_down[0].sprite, i, j);
			j++;
		}
		i++;
	}
}

void	render_game(t_game *game)
{
	init_set(game);
	display_background(game);
	render_core(game);
	mlx_key_hook(game->set.window, key_press, game);
	mlx_hook(game->set.window, 17, 1L << 17, end, game);
	mlx_loop_hook(game->set.mlx, animate_static_player, game);
	mlx_loop(game->set.mlx);
}
