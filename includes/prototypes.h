/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:31:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/21 17:15:29 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <stdbool.h>
# include "structures.h"

/*-------------------------------------------------------------------parsing--*/

void	parsing(t_game *game, int ac, char **av);
void	parse_map(t_game *game, char *av);
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

void	xpm_player_get(t_game *g);
void	xpm_items_get(t_game *g);
void	xpm_b_walls_get(t_game *g);
void	xpm_i_walls_get(t_game *g);

/*---------------------------------------------------------------------utils--*/

void	init_structs(t_game *game);
void	warn(char *message);
void	usage(void);
void	free_and_exit(t_game *game);

#endif