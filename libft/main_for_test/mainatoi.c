/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:08:31 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 12:20:17 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	s1[]="1";
	char	s2[]="10";
	char	s3[]="64564";
	char	s4[]="-1";
	char	s5[]="-10";
	char	s6[]="-64564";
	char	s7[]="yo";
	char	s8[]="salut 27";

	printf("%d		%d\n%d		%d\n%d		%d\n%d		%d\n", ft_atoi(s1), ft_atoi(s2), ft_atoi(s3), ft_atoi(s4),
			ft_atoi(s5), ft_atoi(s6), ft_atoi(s7), ft_atoi(s8));
	printf("------------------------------\n");
	printf("%d		%d\n%d		%d\n%d		%d\n%d		%d\n", atoi(s1), atoi(s2), atoi(s3), atoi(s4),
			atoi(s5), atoi(s6), atoi(s7), atoi(s8));
	return (0);
}
