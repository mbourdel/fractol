/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 12:08:58 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/19 15:44:40 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define FRAC_1 "julia"
# define FRAC_2 "mandelbrot"
# define FRAC_3 "burningship"

# include "mlx.h"
# include "./libft/libft.h"

typedef struct s_env	t_env;
struct					s_env
{
	void				*mlx;
	void				*win;
	char				frac;
};

void					ft_arg_error(int ac, char *str);
char					ft_arg_select(char *str);
void					ft_fractal(char c);
void					ft_julia(void *mlx, void *win);
void					ft_mandelbrot(void *mlx, void *win);
void					ft_burningship(void *mlx, void *win);

#endif
