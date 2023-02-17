/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:40:12 by mmosca            #+#    #+#             */
/*   Updated: 2023/02/16 21:50:48 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"

void	warn(char *message)
{
	ft_dprintf(2, YELLOW"warning:"END" %s\n", message);
}

void	usage(void)
{
	ft_dprintf(2, BLUE"usage:"END" ./so_long \"file_name.ber\"\n");
}
