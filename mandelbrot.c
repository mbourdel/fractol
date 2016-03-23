/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 15:49:58 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/23 15:11:31 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static t_fract	ft_fract_mandel(t_fract fract, int x, int y, t_env *env)
{
	fract.c_r = 1 * (x - X_SIZE / 2) /
		(0.5 * env->zoom * X_SIZE) + env->movx;
	fract.c_i = (y - Y_SIZE / 2) /
		(0.5 * env->zoom * Y_SIZE) + env->movy;
	fract.z_r = 0;
	fract.z_i = 0;
	return (fract);
}

static void		ft_draw(t_env *env, int x, int y, int i)
{
	if (i == IT_MAX && env->toto == 1)
		ft_pixel_put_img(env, x, y, ((x * x + y * y) * 0x439054));
	else if (i == IT_MAX && env->toto == 2)
		ft_pixel_put_img(env, x, y, 0xFFFFFF);
	else if (i == IT_MAX)
		ft_pixel_put_img(env, x, y, 0);
	else if (i > (10 + (env->itbonus / 2)))
		ft_pixel_put_img(env, x, y, ((double)i * 0xFFFFFF / IT_MAX));
	else
		ft_pixel_put_img(env, x, y, ((double)i * 280 * 2 / IT_MAX));
}

void			ft_mandelbrot(t_env *env)
{
	t_fract		fract;

	fract.x = 0;
	while (fract.x < X_SIZE)
	{
		fract.y = 0;
		while (fract.y < Y_SIZE)
		{
			fract = ft_fract_mandel(fract, fract.x, fract.y, env);
			fract.i = 0;
			while ((((fract.z_r * fract.z_r) + (fract.z_i * fract.z_i)) < 4)
					&& (fract.i < IT_MAX))
			{
				fract.tmp = fract.z_r;
				fract.z_r = ((fract.z_r * fract.z_r) - (fract.z_i * fract.z_i)
					+ fract.c_r);
				fract.z_i = ((2 * fract.z_i * fract.tmp) + fract.c_i);
				fract.i++;
			}
			ft_draw(env, fract.x, fract.y, fract.i);
			fract.y++;
		}
		fract.x++;
	}
}
