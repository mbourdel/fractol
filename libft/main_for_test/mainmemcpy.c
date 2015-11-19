/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:24:45 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 15:14:44 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[10] = "connard";
	char	dest[10] = "enculer";
	printf("before:\nsrc:%s|dest:%s\nafter:\nsrc:%s|dest:%s\n", src, dest, src, (char*)ft_memccpy(dest, src, 'n', 5));
	return(0);
}
