/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:12:21 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/06/07 03:27:13 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	add_no_texture(char *buff, t_cub3d *map)
{
	int		i;
	char	*path;

	if (map->no_texture->is_init)
		return (print_error(ERR_DD_TEXTURE, 0));
	i = 2;
	while (buff[i] == ' ')
		i++;
	path = ft_strdup_wnls(&buff[i]);
	if (!path)
		return (print_error(ERR_MALLOC, 0));
	if (!load_texture(map->no_texture, map, path))
	{
		free(path);
		return (0);
	}
	map->no_texture->is_init = 1;
	free(path);
	return (1);
}

static int	add_so_texture(char *buff, t_cub3d *map)
{
	int		i;
	char	*path;

	if (map->so_texture->is_init)
		return (print_error(ERR_DD_TEXTURE, 0));
	i = 2;
	while (buff[i] == ' ')
		i++;
	path = ft_strdup_wnls(&buff[i]);
	if (!path)
		return (print_error(ERR_MALLOC, 0));
	if (!load_texture(map->so_texture, map, path))
	{
		free(path);
		return (0);
	}
	map->so_texture->is_init = 1;
	free(path);
	return (1);
}

static int	add_we_texture(char *buff, t_cub3d *map)
{
	int		i;
	char	*path;

	if (map->we_texture->is_init)
		return (print_error(ERR_DD_TEXTURE, 0));
	i = 2;
	while (buff[i] == ' ')
		i++;
	path = ft_strdup_wnls(&buff[i]);
	if (!path)
		return (print_error(ERR_MALLOC, 0));
	if (!load_texture(map->we_texture, map, path))
	{
		free(path);
		return (0);
	}
	map->we_texture->is_init = 1;
	free(path);
	return (1);
}

static int	add_ea_texture(char *buff, t_cub3d *map)
{
	int		i;
	char	*path;

	if (map->ea_texture->is_init)
		return (print_error(ERR_DD_TEXTURE, 0));
	i = 2;
	while (buff[i] == ' ')
		i++;
	path = ft_strdup_wnls(&buff[i]);
	if (!path)
		return (print_error(ERR_MALLOC, 0));
	if (!load_texture(map->ea_texture, map, path))
	{
		free(path);
		return (0);
	}
	map->ea_texture->is_init = 1;
	free(path);
	return (1);
}

int	add_text(char *buff, t_cub3d *map)
{
	if (ft_strncmp(buff, "NO ", 3) == 0)
	{
		if (!add_no_texture(buff, map))
			return (0);
		return (1);
	}
	else if (ft_strncmp(buff, "SO ", 3) == 0)
	{
		if (!add_so_texture(buff, map))
			return (0);
		return (1);
	}
	else if (ft_strncmp(buff, "WE ", 3) == 0)
	{
		if (!add_we_texture(buff, map))
			return (0);
		return (1);
	}
	else if (ft_strncmp(buff, "EA ", 3) == 0)
	{
		if (!add_ea_texture(buff, map))
			return (0);
		return (1);
	}
	return (-1);
}
