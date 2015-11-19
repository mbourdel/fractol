/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintouplow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:54:55 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 14:06:42 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	char	a = 'a';
	char	b = 'A';
	char	c = '1';
	char	d = 'z';
	char	e = ']';

	printf("ft_toupper	|	toupper\n%c		|	%c\n%c		|	%c\n%c		|	%c\n%c		|	%c\n%c		|	%c\n--------------------------------\n", ft_toupper(a), toupper(a), ft_toupper(b), toupper(b), ft_toupper(c), toupper(c), ft_toupper(d), toupper(d), ft_toupper(e), toupper(e));

	printf("ft_tolower	|	tolower\n%c		|	%c\n%c		|	%c\n%c		|	%c\n%c		|	%c\n%c		|	%c\n--------------------------------\n", ft_tolower(a), tolower(a), ft_tolower(b), tolower(b), ft_tolower(c), tolower(c), ft_tolower(d), tolower(d), ft_tolower(e), tolower(e));
	return (0);
}
