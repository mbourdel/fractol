/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:06:03 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 16:11:48 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[]="y'a de la puree";
	char	dest[80]="dans ton cul ";

	printf("src:%s\ndest:%s\n", src, dest);
	ft_strcat(dest, src);
	printf("dest:%s\n", dest);
	return (0);
}
