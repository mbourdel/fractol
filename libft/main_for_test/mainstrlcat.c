/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:26:02 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 15:55:42 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[]="y'a de la puree enculer\0";  //23 
	char	dest[20]="Hey dans ton cul \0";  // 17
	char	src2[]="y'a de la puree enculer\0";
	char	dest2[20]="Hey dans ton cul \0";

	printf("src:%s\ndest:%s\n", src, dest);
	printf("%d\n", (int)strlcat(dest, src, 50));
	printf("src:%s\ndest:%s\n", src, dest);
	printf("%d\n", (int)ft_strlcat(dest2, src2, 50));
	printf("src:%s\ndest:%s\n", src2, dest2);
	return (0);
}
