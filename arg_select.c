/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_select.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 14:41:11 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/22 17:47:53 by mbourdel         ###   ########.fr       */
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
	else if (*str == 'b')
		arg = 3;
	else if (*str == '3' && str[1] == 'j')
		arg = 4;
	else
		arg = 5;
	return (arg);
}
