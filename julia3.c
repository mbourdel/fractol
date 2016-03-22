/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:32:52 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/22 17:35:56 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static t_fract	ft_fract_julia(t_fract fract, int x, int y, t_env *env)
{
	fract.c_r = -0.7 * env->swag;
	fract.c_i = 0.27015 * env->yolo;
	fract.z_r = (x - X_SIZE / 2) /
		(0.5 * env->zoom * X_SIZE) + env->movx;
	fract.z_i = (y - Y_SIZE / 2) /
		(0.5 * env->zoom * Y_SIZE) + env->movy;
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
	else if (i > 10)
		ft_pixel_put_img(env, x, y, ((double)i * 0xFFFFFF / IT_MAX));
	else
		ft_pixel_put_img(env, x, y, ((double)i * 280 * 2 / IT_MAX));
}

void			ft_3julia(t_env *env)
{
	t_fract		fract;

	fract.x = 0;
	while (fract.x < X_SIZE)
	{
		fract.y = 0;
		while (fract.y < Y_SIZE)
		{
			fract = ft_fract_julia(fract, fract.x, fract.y, env);
			fract.i = -1;
			while (++fract.i < IT_MAX &&
				(((fract.z_r * fract.z_r) + (fract.z_i * fract.z_i)) < 4))
			{
				fract.tmp = fract.z_r;
				fract.z_r = ((fract.z_r * fract.z_r * fract.z_r)
						- 3.0 * (fract.z_r * fract.z_i * fract.z_i)
						+ fract.c_r);
				fract.z_i = ((3 * fract.z_i * fract.tmp * fract.tmp)
						- (fract.z_i * fract.z_i * fract.z_i) + fract.c_i);
			}
			ft_draw(env, fract.x, fract.y, fract.i);
			fract.y++;
		}
		fract.x++;
	}
}
