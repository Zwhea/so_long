/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:03 by twang             #+#    #+#             */
/*   Updated: 2023/02/25 23:50:06 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	display_collectible(t_game *g, int i, int j)
{
	display_image(g, g->txtr.t_items.collect_closed, i, j);
}

void	display_exit_game(t_game *g, int i, int j)
{
	display_image(g, g->txtr.t_items.exit_closed, i, j);
}
