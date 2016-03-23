/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 06:51:59 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/23 17:09:22 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			mouse_hook(int button, int x, int y, t_env *env)
{
	if (button == LEFT_CLK || button == SCROLL_UP)
	{
		env->movx = env->movx - env->x_pos;
		env->movy = env->movy - env->y_pos;
		env->zoom = env->zoom * 1.1;
		env->movx = env->movx +
			(env->x_pos * ((env->zoom / 1.1) / env->zoom));
		env->movy = env->movy +
			(env->y_pos * ((env->zoom / 1.1) / env->zoom));
		env->itchange == 1 ? env->itbonus++ : (x = x + x - x);
	}
	if (button == RIGHT_CLK || button == SCROLL_DW)
	{
		env->movx = env->movx - env->x_pos;
		env->movy = env->movy - env->y_pos;
		env->zoom = env->zoom / 1.1;
		env->movx = env->movx +
			(env->x_pos * ((env->zoom * 1.1) / env->zoom));
		env->movy = env->movy +
			(env->y_pos * ((env->zoom * 1.1) / env->zoom));
		env->itchange == 1 ? env->itbonus-- : (x = x + x - x);
	}
	expose_hook(env);
	return (x - y - x + y);
}
