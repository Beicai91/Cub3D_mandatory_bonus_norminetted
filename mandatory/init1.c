/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:40:36 by caibei            #+#    #+#             */
/*   Updated: 2024/08/21 18:23:38 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	init_map_data(t_data *data)
{
	data->mapinfo.map = NULL;
	data->mapinfo.max_w = 0;
	data->mapinfo.hgt = 0;
}

static void	init_player_data(t_data *data)
{
	data->player.plyr_x = 0.0;
	data->player.plyr_y = 0.0;
	data->player.dir = 0.0;
	data->player.if_moved = 0;
}

static void	init_ray_data(t_data *data)
{
	data->rayinfo.ray_d = 0.0;
	data->rayinfo.ray_hd = 0.0;
	data->rayinfo.ray_vd = 0.0;
	data->rayinfo.yn = 0.0;
	data->rayinfo.xn = 0.0;
	data->rayinfo.xd = 0.0;
	data->rayinfo.yd = 0.0;
	data->rayinfo.ray_angle = 0.0;
	data->rayinfo.ray_xh = 0.0;
	data->rayinfo.ray_yh = 0.0;
	data->rayinfo.ray_xv = 0.0;
	data->rayinfo.ray_yv = 0.0;
	data->rayinfo.ray_x_final = 0.0;
	data->rayinfo.ray_y_final = 0.0;
}

void	init_data(t_data *data)
{
	init_map_data(data);
	init_player_data(data);
	init_ray_data(data);
	data->mlx = NULL;
	data->win = NULL;
	data->notex = NULL;
	data->sotex = NULL;
	data->wetex = NULL;
	data->eatex = NULL;
	data->ceil_color = 0;
	data->floor_color = 0;
	data->screen_img.img_ptr = NULL;
	data->tex.no_img.img_ptr = NULL;
	data->tex.ea_img.img_ptr = NULL;
	data->tex.so_img.img_ptr = NULL;
	data->tex.we_img.img_ptr = NULL;
	data->player_count = 0;
}
