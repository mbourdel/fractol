/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_put_img.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 14:05:13 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/17 14:15:05 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		ft_pixel_put_img(t_env *env, int x, int y, unsigned int color)
{
	int		i;
	char	clr[(env->bpp / 8) - 1];

	if (!(x >= X_SIZE || y >= Y_SIZE) && x >= 0 && y >= 0)
	{
		i = 0;
		while (i < (env->bpp / 8) - 1)
		{
			clr[i] = color >> (i * 8);
			i++;
		}
		env->data[(y * env->size_line) +
			(x * (env->bpp / 8)) + i] = 0;
		i--;
		while (i >= 0)
		{
			env->data[(y * env->size_line) +
				(x * (env->bpp / 8)) + i] = clr[i];
			i--;
		}
	}
}
