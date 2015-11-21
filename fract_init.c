/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 13:11:41 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/21 04:28:28 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fract			ft_fract_init(char c, t_fract fract)
{
	if (c == 1)
	{
		fract.x = 0;
		fract.y = 0;
		fract.xzoom = (X_SIZE / (1.5 - (-1.5)));
		fract.yzoom = (Y_SIZE / (1.5 - (-1.5)));
	}
	if (c == 2)
	{
		fract.x = 0;
		fract.y = 0;
		fract.xzoom = (X_SIZE / ((0.6) - (-2.1)));
		fract.yzoom = (Y_SIZE / ((1.2) - (-1.2)));
	}
	return (fract);
}
