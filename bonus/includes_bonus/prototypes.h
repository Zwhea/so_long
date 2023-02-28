/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:31:04 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/28 16:05:02 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <stdbool.h>
# include "structures.h"

/*============================================================================*/

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

/*============================================================================*/

/*-------------------------------------------------------------init settings--*/

void	init_set(t_game *game);
void	init_structs(t_game *game);

/*------------------------------------------------------------------textures--*/

void	xpm_items_get(t_game *g);
void	xpm_player_get(t_game *g);
void	xpm_b_walls_get(t_game *g);
void	xpm_b_i_walls_get(t_game *g);
void	xpm_i_walls_get(t_game *g);

/*--------------------------------------------------------------------render--*/

void	render_game(t_game *game);
void	render_core(t_game *game);

/*--------------------------------------------------------------------events--*/

int		key_press(t_keycode key_code, t_game *game);
int		end(t_game *g);

/*============================================================================*/

/*-------------------------------------------------------------checks events--*/

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

/*-----------------------------------------------------------image functions--*/

void	display_image(t_game *game, void *image, int i, int j);

void	display_walls(t_game *g, int i, int j);

void	destroy_items(t_game *g);
void	destroy_player(t_game *g);
void	destroy_walls(t_game *g);

/*---------------------------------------------------------------------utils--*/

void	check_tiles(t_game *g, int i, int j);
void	warn(char *message);
void	usage(void);
void	win(t_game *g);
void	free_and_exit(t_game *game);

void	xpm_bonus_idle_player_get(t_game *g);
void	xpm_bonus_mv_down_player_get(t_game *g);
void	xpm_bonus_mv_left_player_get(t_game *g);
void	xpm_bonus_mv_right_player_get(t_game *g);
void	xpm_bonus_mv_up_player_get(t_game *g);

void	destroy_idle_player(t_game *g);
void	destroy_mv_down_player(t_game *g);
void	destroy_mv_left_player(t_game *g);
void	destroy_mv_right_player(t_game *g);
void	destroy_mv_up_player(t_game *g);

int		animate_static_player(t_game *g);

int		count_frame(t_game *g);
void	display_string(t_game *g);

#endif