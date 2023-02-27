/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:43:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/27 13:51:03 by twang            ###   ########.fr       */
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

void	win(t_game *g)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	x = (g->set.win_width / 2) - 240;
	y = (g->set.win_heigth / 2) - 144;
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
	ft_dprintf(1, YELLOW"Congratulations! ");
	ft_dprintf(1, "You completed a great game in only"END);
	ft_dprintf(1, " %d moves!\n", g->map.player.moves);
}
