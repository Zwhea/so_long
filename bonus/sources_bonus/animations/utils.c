/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:24:38 by twang             #+#    #+#             */
/*   Updated: 2023/02/27 16:19:14 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int    count_frame(t_game *g)
{   
    static int  count_frame;
    
    (void) g;
    printf("test: %d\n", count_frame);
    count_frame++;
    count_frame %= 10;
    return (0);
}