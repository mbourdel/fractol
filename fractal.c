/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 15:31:30 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/19 15:40:06 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			ft_fractal(char c)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, X_SIZE, Y_SIZE, "Fract'ol");
	if (c == 1)
		ft_julia(mlx, win);
	else if (c == 2)
		ft_mandelbrot(mlx, win);
	else
		ft_burningship(mlx, win);
	free(win);
	free(mlx);
}
