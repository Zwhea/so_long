/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:31:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/25 22:18:25 by wangthea         ###   ########.fr       */
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

/*-------------------------------------------------------------init settings--*/

void	init_set(t_game *game);
void	init_structs(t_game *game);

/*-------------------------------------------------------------------display--*/

void	render_game(t_game *game);
void	render_core(t_game *game);

void	display_image(t_game *game, void *image, int i, int j);
void	display_walls(t_game *g, int i, int j);
void	display_collectible(t_game *game, int i, int j);
void	display_exit_game(t_game *game, int i, int j);
void	display_player(t_game *game, int i, int j);

/*-------------------------------------------------------------------destroy--*/

void	destroy_items(t_game *g);
void	destroy_player(t_game *g);
void	destroy_walls(t_game *g);

/*------------------------------------------------------------------textures--*/

void	xpm_items_get(t_game *g);
void	xpm_player_get(t_game *g);
void	xpm_b_leftbot_walls_get(t_game *g);
void	xpm_b_righttop_walls_get(t_game *g);
void	xpm_i_leftbot_walls_get(t_game *g);
void	xpm_i_righttop_walls_get(t_game *g);

/*--------------------------------------------------------------------events--*/

int		key_press(t_keycode key_code, t_game *game);
int		end(t_game *g);

void	left_tile_is_space(t_game *g, int i, int j);
void	left_tile_is_closed_collect(t_game *g, int i, int j);
void	left_tile_is_open_collect(t_game *g, int i, int j);
void	left_tile_is_exit(t_game *g, int i, int j);

void	right_tile_is_space(t_game *g, int i, int j);
void	right_tile_is_closed_collect(t_game *g, int i, int j);
void	right_tile_is_open_collect(t_game *g, int i, int j);
void	right_tile_is_exit(t_game *g, int i, int j);

void	top_tile_is_space(t_game *g, int i, int j);
void	top_tile_is_closed_collect(t_game *g, int i, int j);
void	top_tile_is_open_collect(t_game *g, int i, int j);
void	top_tile_is_exit(t_game *g, int i, int j);

void	bot_tile_is_space(t_game *g, int i, int j);
void	bot_tile_is_closed_collect(t_game *g, int i, int j);
void	bot_tile_is_open_collect(t_game *g, int i, int j);
void	bot_tile_is_exit(t_game *g, int i, int j);

/*---------------------------------------------------------------------utils--*/

void	check_tiles(t_game *g, int i, int j);
void	warn(char *message);
void	usage(void);
void	win(t_game *g);
void	free_and_exit(t_game *game);

#endif