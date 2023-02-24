/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:52:03 by twang             #+#    #+#             */
/*   Updated: 2023/02/24 13:04:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

void	display_collectible(t_game *g, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche collectible closed == pas recup
	- affiche collectible open == recup
	*/
	display_image(g, g->txtr.t_items.collect_closed, i, j);
}

void	display_exit_game(t_game *g, int i, int j)
{
	/*
	si les collectibles sont recuperes ou non:
	- affiche exit_closed == pas recup
	- affiche exit open == tout recup
	*/
	display_image(g, g->txtr.t_items.exit_closed, i, j);
}
