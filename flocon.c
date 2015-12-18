/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flocon.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:19:17 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/18 18:49:25 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int			ft_random_for_the_man()
{
	static int	tab[X_SIZE / 2 - 5];
	static int	first = 0;
	int			index;
	int			ret;
	int			i;

	if (first == 0)
	{
		i = -1;
		while (i++ < (X_SIZE / 2 - 5))
			tab[i] = rand();
		first = 1;
	}
	index = (int)(rand() / RAND_MAX * (X_SIZE / 2 - 6));
	ret = tab[index];
	tab[index] = rand();
	return (ret);
}

static unsigned int	ft_color(int x, int y)
{
	unsigned int	color;
	unsigned char	change;
	int				i;

	i = 0;
	color = 0xE0FFFF;
	change = color;
	change -= ((X_SIZE - x) / 4);
	change -= ((Y_SIZE - y) / 4);	
	color = color & (change | change << 8 | change << 16);
	return (color);
}

void				ft_flocon(t_env *env)
{
	int				x;
	int				y;
	int				i;
	unsigned int	color;
	static int		limit = 350;

	i = 0;
	x = 1;
	y = 0;
	while (i++ < 450)
	{
		x = 0;
		while (x <= limit || x >= (X_SIZE / 2))
			x = ft_random_for_the_man() % X_SIZE / 2;
		y = 0;
		while (y < (Y_SIZE / 2))
		{
			if (!PXL_DW_BOT && !PXL_DW_LT && !PXL_DW_RGT)
				y++;
			else
				break ;
		}
		color = ft_color(x, y);
		ft_pixel_put_img(env, x, y, color);
		ft_pixel_put_img(env, X_SIZE - x, y, color);
		ft_pixel_put_img(env, x, Y_SIZE - y, color);
		ft_pixel_put_img(env, X_SIZE - x, Y_SIZE - y, color);
	}
	if (limit >= 15)
		limit -= 15;
}
