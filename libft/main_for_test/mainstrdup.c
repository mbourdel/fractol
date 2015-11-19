/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:26:53 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/05 15:31:51 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	src[]="dans ton cul";
	char	*dest;

	dest = ft_strdup(src);
	printf("src:%s\ndest:%s\n", src, dest);
	return (0);
}
