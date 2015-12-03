/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 13:11:41 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/03 17:16:54 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fract			ft_fract_init(char c, t_fract fract)
{
	if (c == 1)
	{
		fract.x = 0;
		fract.y = 0;
	}
	if (c == 2)
	{
		fract.x = 0;
		fract.y = 0;
	}
	if (c == 3)
	{
		fract.x = 0;
		fract.y = 0;
	}
	return (fract);
}
