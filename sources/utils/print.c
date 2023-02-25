/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:43:28 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/25 23:50:46 by wangthea         ###   ########.fr       */
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
	ft_dprintf(1, YELLOW"Congratulations! ");
	ft_dprintf(1, "You completed a great game in only"END);
	ft_dprintf(1, " %d moves!\n", g->map.player.moves);
}
