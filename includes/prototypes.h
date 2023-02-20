/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:31:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/20 14:50:32 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <stdbool.h>
# include "structures.h"

/*-------------------------------------------------------------------parsing--*/

void	is_valid_argument(int ac, char **av);
void	initialize_map(char *av, t_game *game);
void	check_map(t_game *game);

/*-------------------------------------------------------------utils parsing--*/

void	collect_number_of_chars(t_game *game);
void	check_top_bottom_borders(t_game *game);
void	check_left_right_borders(t_game *game);
void	check_solvability(t_game *game);
void	format_display_errors(t_errors error_status, t_game *game);
void	char_display_errors(t_errors error_status, t_game *game);
void	walls_display_errors(t_errors error_status, t_game *game);
void	unsolvable_display_errors(t_game *game);

/*-------------------------------------------------------------------display--*/

void    init_set(t_game *game);
void	render_game(t_game *game);
void	display_image(t_game *game, void *image, int i, int j);
void	display_wall(t_game *game, int i, int j);
void	display_collectible(t_game *game, int i, int j);
void	display_exit_game(t_game *game, int i, int j);
void	display_player(t_game *game, int i, int j);

/*------------------------------------------------------------------textures--*/

void	xpm_background_get(t_game *game);
void	xpm_wall_get(t_game *game);
void	xpm_assets_get(t_game *game);

/*---------------------------------------------------------------------utils--*/

void	set_struct_to_zero(t_game *game);
void	free_and_exit(t_game *game);

#endif