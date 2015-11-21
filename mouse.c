/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 05:49:39 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/21 06:17:06 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			mouse(int x, int y, t_env *env)
{
	static int		x_start = X_SIZE / 2;
	static int		y_start = Y_SIZE / 2;

	if (x >= X_SIZE || y >= Y_SIZE)
		return (1);
	if (x != x_start)
	{
		env->swag = env->swag + (0.0001 * (x - x_start));
		x_start = x;
	}
	if (y != y_start)
	{
		env->yolo = env->yolo + (0.002 * (y - y_start));
		y_start = y;
	}
	expose_hook(env);
	return (0);
}
