/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fougere.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:34:25 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/03 19:39:33 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_random_for_the_man()
{
	static int	tab[X_SIZE -5];
	static int	first = 0;
	int			index;
	int			ret;
	int			i;

	if (first == 0)
	{
		i = -1;
		while (i++ < (X_SIZE - 5))
			tab[i] = rand();
		first = 1;
	}
	index = (int)(rand() / RAND_MAX * (X_SIZE - 6));
	ret = tab[index];
	tab[index] = rand();
	return (ret);
}

void		ft_fougere(t_env *env)
{
	int				x;
	int				y;
	int				i;
	unsigned int	color;

	i = 0;
	x = 1;
	y = 0;
	color = 0x001000;
	ft_bzero(env->data, (X_SIZE * Y_SIZE * env->bpp / 8));
	while (x < X_SIZE)
		ft_pixel_put_img(env, x++, Y_SIZE - 1, 0x00FF00);
	while (i++ < 70000)
	{
		x = 0;
		//x = (int)rand() / (double)RAND_MAX * (X_SIZE - 4 - 1);
		while (x < 4 || x > (X_SIZE - 4))
			x = ft_random_for_the_man() % X_SIZE;
		y = 0;
		while (y < (Y_SIZE - 2))
		{
			if (PXL_DW_BOT == 0 && PXL_DW_LT == 0 && PXL_DW_RGT == 0)
				y++;
			else
				break ;
		}
		color >> 16 = (unsigned char)(255 - (unsigned char)(y * (1 / Y_SIZE)));
		ft_pixel_put_img(env, x, y, color);
	}
}
