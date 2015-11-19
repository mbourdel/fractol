/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_select.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 14:41:11 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/19 15:23:17 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

char			ft_arg_select(char *str)
{
	char	arg;

	if (*str == 'j')
		arg = 1;
	else if (*str == 'm')
		arg = 2;
	else
		arg = 3;
	return (arg);
}
