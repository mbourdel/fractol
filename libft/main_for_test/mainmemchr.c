/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:11:11 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 14:31:02 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	s1[]="yolo bastard!";
	int		c;

	c = ' ';
	printf("%s\n", (char*)ft_memchr(s1, c, 5));
	printf("%s\n", (char*)memchr(s1, c, 5));
	return (0);
}
