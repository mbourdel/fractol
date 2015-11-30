/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 15:31:30 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/30 19:58:02 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		ft_toto(int k, t_env *env)
{
	static char	titi = 0;

	if (k == SPACE && titi == 0)
	{
		env->toto = 1;
		titi = 1;
	}
	else if (k == SPACE && titi == 1)
	{
		env->toto = 2;
		titi = 2;
	}
	else if (k == SPACE && titi == 2)
	{
		env->toto = 0;
		titi = 0;
	}
	else if (k == RIGHT)
		env->yolo = env->yolo + 0.002;
	else if (k == LEFT)
		env->yolo = env->yolo - 0.002;
	else if (k == UP)
		env->swag = env->swag + 0.0001;
	else if (k == DW)
		env->swag = env->swag - 0.0001;
}

static void		ft_tutu(int k, t_env *env)
{
	if (k == PG_UP)
		env->itbonus++;
	else if (k == PG_DW)
		env->itbonus--;
	else if (k == ONE)
		env->itbonus = 100;
	else if (k == TWO)
		env->itbonus = -35;
	else if (k == THREE)
		env->itbonus = 0;
	else if (k == END && env->tata == 0)
		env->tata = 1;
	else if (k == END && env->tata == 1)
		env->tata = 0;
}

int				expose_hook(t_env *env)
{
	mlx_clear_window(env->mlx, env->win);
	if (env->select == 1)
		ft_julia(env);
	if (env->select == 2)
		ft_mandelbrot(env);
	if	(env->select == 3)
		ft_explore(env);
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	return (0);
}

static int		key_hook(int keycode, t_env *env)
{
	if (keycode == ESC)
	{
		free(env->data);
		free(env->img);
		free(env->win);
		free(env->mlx);
		exit(0);
	}
	ft_toto(keycode, env);
	ft_tutu(keycode, env);
	expose_hook(env);
	return (0);
}

void			ft_fractal(char c)
{
	t_env		env;

	env.itbonus = 0;
	env.yolo = 1;
	env.swag = 1;
	env.tata = 0;
	env.zoom = 0.6;
	env.movx = -0.5;
	env.movy = 0;
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, X_SIZE, Y_SIZE, "Fract'ol");
	env.img = mlx_new_image(env.mlx, X_SIZE, Y_SIZE);
	env.data =
		mlx_get_data_addr(env.img, &(env.bpp), &(env.size_line), &(env.endian));
	env.select = c;
	mlx_expose_hook(env.win, expose_hook, &env);
	mlx_key_hook(env.win, key_hook, &env);
	mlx_hook(env.win, 6, 1L << 6, &mouse, &env);
	mlx_loop(env.mlx);
	return ;
}
