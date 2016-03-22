/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 12:17:05 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/22 17:50:49 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		arg_invalid(void)
{
	ft_putstr("Error: Invalid argument\n");
	ft_putstr("Arg list:\n--------\n- julia\n- mandelbrot\n");
	ft_putstr("- burning\n- 3julia\n- 3mandelbrot\n");
	exit(0);
}

static void		ac_error(int ac)
{
	if (ac != 2)
		arg_invalid();
}

static void		av_error(char *str)
{
	if (ft_strcmp(str, FRAC_1) == 0)
		return ;
	else if (ft_strcmp(str, FRAC_2) == 0)
		return ;
	else if (ft_strcmp(str, FRAC_3) == 0)
		return ;
	else if (ft_strcmp(str, FRAC_4) == 0)
		return ;
	else if (ft_strcmp(str, FRAC_5) == 0)
		return ;
	else
		arg_invalid();
}

void			ft_arg_error(int ac, char *str)
{
	ac_error(ac);
	av_error(str);
}
