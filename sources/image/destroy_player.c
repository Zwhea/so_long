/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:52:40 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/24 13:02:54 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	destroy_player(t_game *g)
{
	if (g->txtr.t_player.link)
		mlx_destroy_image(g->set.mlx, g->txtr.t_player.link);
}
