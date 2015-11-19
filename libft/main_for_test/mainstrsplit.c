/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:28:41 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/07 18:39:52 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	char	str[]="**salut***mec***ca*va*";
	char	**tab;
	int		i;

	i = 0;
	tab = ft_strsplit(str, '*');
	while (tab[i][0])
		printf("%s\n", tab[i++]);
	return (0);
}
