/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:15 by twang             #+#    #+#             */
/*   Updated: 2023/02/23 13:10:18 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	display_player(t_game *g, int i, int j)
{
	/*
		voir comment afficher les mouvements!! 
	*/
	display_image(g, g->txtr.player.link, i, j);
}
