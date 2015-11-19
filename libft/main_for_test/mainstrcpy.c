/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:38:39 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 15:53:58 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[]="dans ton cul";
	char	dest[]="y'a de la puree";

	printf("src:%s\ndest:%s\n", src, dest);
	ft_strcpy(dest, (const char*)src);
	printf("src:%s\ndest:%s\n", src, dest);
	return (0);
}

