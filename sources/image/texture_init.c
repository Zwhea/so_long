/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:31:09 by twang             #+#    #+#             */
/*   Updated: 2023/02/17 17:50:45 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    xpm_get(t_game *game)
{
    game->texture.grass = mlx_xpm_file_to_image(game->set.mlx,
        "./assets/xpm/grass.xpm", &game->texture.img_width,
        &game->texture.img_heigth);
}
