/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 05:49:39 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/03 14:55:40 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			mouse(int x, int y, t_env *env)
{
	static int		x_start = X_SIZE / 2;
	static int		y_start = Y_SIZE / 2;

	if (x >= X_SIZE || y >= Y_SIZE || y < 0 || x < 0)
		return (1);
	if (x != x_start)
	{
		if (env->tata == 1)
			env->swag = env->swag + (0.0001 * (x - x_start));
		x_start = x;
		env->x_pos = ((double)x - X_SIZE / 2) * 2 / (X_SIZE * env->zoom) * -1;
	}
	if (y != y_start)
	{
		if (env->tata == 1)
			env->yolo = env->yolo + (0.002 * (y - y_start));
		y_start = y;
		env->y_pos = ((double)y - Y_SIZE / 2) * 2 / (Y_SIZE * env->zoom) * -1;
	}
	if (env->tata == 1)
		expose_hook(env);
	return (0);
}
