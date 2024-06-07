/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:59:18 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:44 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	load_texture(t_text *texture, t_cub3d *map, char *path)
{
	texture->img = mlx_xpm_file_to_image(map->mlx, path, \
					&texture->width, &texture->height);
	if (!texture->img)
		return (print_error(ERR_TEXTURE, 0));
	texture->addr = mlx_get_data_addr(texture->img, &texture->bits_per_pixel, \
					&texture->line_length, &texture->endian);
	if (!texture->addr)
		return (print_error(ERR_ADDR, 0));
	return (1);
}

int	create_mlx_color(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
