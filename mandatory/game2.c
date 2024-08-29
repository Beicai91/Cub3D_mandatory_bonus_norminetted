/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcai <bcai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:26:58 by caibei            #+#    #+#             */
/*   Updated: 2024/08/21 18:22:12 by bcai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	render(t_data *data)
{
	if (data->player.if_moved == 0)
		return (0);
	render_cur_view(data);
	return (0);
}