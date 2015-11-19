/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:51:36 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 14:35:15 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	s1[]="salut";
	char	s2[]="salut";
	char	s3[]="salutation";
	char	s4[]="salutatioz";
	char	s5[]="salut\0tion";
	char	s6[]="salutation";

	printf("%d\n%d\n%d\n",ft_strcmp(s1, s2), ft_strcmp(s3, s4), ft_strcmp(s5, s6));
	printf("-------------\n");
	printf("%d\n%d\n%d\n",strcmp(s1, s2), strcmp(s3, s4), strcmp(s5, s6));

	return (0);
}
