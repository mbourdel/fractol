/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmmmmm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 20:17:10 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 20:30:56 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src1[]="bonjour";
	char	src2[]="bonjour";
	char	dest1[30]="coucou sale enculer";
	char	dest2[30]="coucou sale enculer";

	printf("%s\n%s", (char*)ft_memcpy(dest1, src1, 3), (char*)ft_memmove(dest2, src2, 3));
	return (0);
}
