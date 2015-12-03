/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 12:15:26 by mbourdel          #+#    #+#             */
/*   Updated: 2015/12/03 18:51:18 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			main(int ac, char **av)
{
	srand(time(NULL));
	ft_arg_error(ac, av[1]);
	ft_fractal(ft_arg_select(av[1]));
	return (0);
}
