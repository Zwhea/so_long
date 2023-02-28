/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:43:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/28 19:49:42 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	warn(char *message)
{
	ft_dprintf(2, YELLOW"warning:"END" %s\n", message);
}

void	usage(void)
{
	ft_dprintf(2, BLUE"usage:"END" ./so_long \"file_name.ber\"\n");
}

static void	display_string_win(t_game *g)
{
	char	*steps;
	int		width;
	int		heigth;
	int		i;
	
	steps = ft_itoa(g->map.player.moves);
	width = g->map.map_width + 2;
	heigth = g->map.map_heigth + 2;
	i = 1;
	while (i < width - 1)
	{
		mlx_put_image_to_window(g->set.mlx, g->set.window,
			g->txtr.t_items.grass, IMG_WIDTH * i, IMG_HEIGHT * (heigth - 1));
		i++;
	}
	mlx_string_put(g->set.mlx, g->set.window, ((width * 96) / 2) - 72,
		(heigth * 96) - 64, 0xFFFFFF, "You won in");
	mlx_string_put(g->set.mlx, g->set.window, ((width * 96) / 2) + 8,
		(heigth * 96) - 64, 0xFFFFFF, steps);
	mlx_string_put(g->set.mlx, g->set.window, ((width * 96) / 2) + 24,
		(heigth * 96) - 64, 0xFFFFFF, "moves !");
	free(steps);
	steps = NULL;
}

void	win(t_game *g)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = (g->set.win_width / 2) - 144;
	y = (g->set.win_heigth / 2) - 48;
	while (g->map.map[i])
	{
		j = 0;
		while (g->map.map[i][j])
		{
			display_image(g, g->txtr.t_items.grass, i, j);
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(g->set.mlx, g->set.window, g->txtr.t_items.you_won,
		x, y);
	display_string_win(g);
	ft_dprintf(1, YELLOW"Congratulations! ");
	ft_dprintf(1, "You completed a great game in only"END);
	ft_dprintf(1, " %d moves!\n", g->map.player.moves);
}
