/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:14:04 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 16:25:31 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[]="y'a de la puree";
	char	dest[80]="dans ton cul ";

	printf("src:%s\ndest:%s\n", src, dest);
	ft_strncat(dest, src, 6);
	printf("dest:%s\n", dest);
	return (0);
}
