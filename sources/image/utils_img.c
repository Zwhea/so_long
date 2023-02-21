/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_img.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:45:07 by twang             #+#    #+#             */
/*   Updated: 2023/02/21 12:45:29 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_image(t_game *game, void *image, int i, int j)
{
	mlx_put_image_to_window(game->set.mlx, game->set.window, image,
		game->texture.img_width * j, game->texture.img_width * i);
}
