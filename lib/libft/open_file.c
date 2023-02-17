/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:48:21 by wangthea          #+#    #+#             */
/*   Updated: 2023/02/17 10:24:06 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	open_file(char *av)
{
	int	fd;

	fd = open(av, O_DIRECTORY, 0644);
	if (fd != -1)
	{
		ft_dprintf(2, RED"Error\n"END);
		ft_dprintf(2, YELLOW"warning:"END" the file shouldn't be a directory\n");
		close(fd);
		exit (1);
	}
	close(fd);
	fd = open(av, O_RDONLY, 0644);
	if (fd == -1)
	{
		ft_dprintf(2, RED"Error\n"END);
		perror("open");
		close(fd);
		exit (1);
	}
	return (fd);
}
