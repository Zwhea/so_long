/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:28:35 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/17 11:58:14 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <stdint.h>
# include <stdbool.h>
# include "structures.h"

// -- Prototypes

// - check_map.c
void	check_map(t_game *g);

// - check_solvability.c
void	check_solvability(t_game *g);

// - parse_map.c
void	parse_map(t_game *g, char **argv);

// - utils.c
void	fill_map_items(t_game *g);

// - parsing.c
void	parsing(t_game *g, int32_t argc, char **argv);

// - init.c
void	init_struct(t_game *g);

// - errors.c
void	display_char_errors(t_game *g, t_char_error status);
void	display_wall_error(t_game *g, t_char_error status);
void	display_unsolvable_error(t_game *g);

// - map_char.c
bool	is_collectible(char c);
bool	is_wall(char c);
bool	is_space(char c);
bool	is_player(char c);
bool	is_exit(char c);
bool	is_valid_char(char c);

// - print.c
void	warn(char *message);
void	usage(void);

#endif //PROTOTYPES_H
