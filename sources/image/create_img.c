/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:28:45 by twang             #+#    #+#             */
/*   Updated: 2023/02/17 17:38:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*

pixel_get
pixel_print

*/

void    new_image(t_game *game)
{
    game->image.image = mlx_new_image(game->set.mlx, game->set.win_width,
        game->set.win_heigth);
	if (!game->image.image)
		free_and_exit(&game);
	game->image.address = mlx_get_data_addr(game->image.image,
		&game->image.bits_per_pixel, &game->image.line_length,
        &game->image.endian);
    if (!game->image.address)
		free_and_exit(&game);
}
