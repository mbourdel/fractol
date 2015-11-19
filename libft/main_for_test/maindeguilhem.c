/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maindeguilhem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:01:51 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 16:09:40 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	char s[] = "Salut";
	char d[20];
	printf("Before memcpy dest = %s\n", d);
	(char *)ft_memccpy(d, s,'z', ft_strlen(s)+ 1);
	printf("After  memcpy dest = %s\n", d);
	printf("---Comparaison avec les vrai fonctions---\n");
	char s2[] = "Salut";
	char d2[20];
	printf("Before memcpy dest = %s\n", d2);
	(char *)memccpy(d2, s2,'z', strlen(s2)+ 1);
	printf("After  memcpy dest = %s\n", d2);
	return (0);
}

