/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainissomething.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:24:20 by mbourdel          #+#    #+#             */
/*   Updated: 2014/11/06 12:51:48 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	int		a = 'a';
	int		b = 'A';
	int		c = '1';
	int		d = 300;
	int		e = ']';
	printf("ft_isXXX	 	isXXX\n");
	printf("--------------------------------\n");
	printf("ft_isalpha	|	isalpha\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n--------------------------------\n", ft_isalpha(a), isalpha(a), ft_isalpha(b), isalpha(b), ft_isalpha(c), isalpha(c), ft_isalpha(d), isalpha(d), ft_isalpha(e), isalpha(e));
	printf("ft_isdigit	|	isdigit\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n--------------------------------\n", ft_isdigit(a), isdigit(a), ft_isdigit(b), isdigit(b), ft_isdigit(c), isdigit(c), ft_isdigit(d), isdigit(d), ft_isdigit(e), isdigit(e));
	printf("ft_isalnum	|	isalnum\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n--------------------------------\n", ft_isalnum(a), isalnum(a), ft_isalnum(b), isalnum(b), ft_isalnum(c), isalnum(c), ft_isalnum(d), isalnum(d), ft_isalnum(e), isalnum(e));
	printf("ft_isascii	|	isascii\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n--------------------------------\n", ft_isascii(a), isascii(a), ft_isascii(b), isascii(b), ft_isascii(c), isascii(c), ft_isascii(d), isascii(d), ft_isascii(e), isascii(e));
	printf("ft_isprint	|	isprint\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n%d		|	%d\n--------------------------------\n", ft_isprint(a), isprint(a), ft_isprint(b), isprint(b), ft_isprint(c), isprint(c), ft_isprint(d), isprint(d), ft_isprint(e), isprint(e));

	return (0);
}
