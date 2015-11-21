/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 12:08:58 by mbourdel          #+#    #+#             */
/*   Updated: 2015/11/21 06:59:59 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define FRAC_1 "julia"
# define FRAC_2 "mandelbrot"
# define FRAC_3 "burningship"
# define ESC 53
# define SPACE 49
# define PG_UP 116
# define PG_DW 121
# define RIGHT 124
# define LEFT 123
# define UP 126
# define DW 125
# define SCROLL_DW 4
# define SCROLL_UP 5
# define X_SIZE 2000
# define Y_SIZE 1200
# define IT_MUX 42

# define IT_MAX (IT_MUX + env->itbonus)

# include "mlx.h"
# include "./libft/libft.h"

typedef struct s_env	t_env;
struct					s_env
{
	int					select;
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	int					bpp;
	int					size_line;
	int					endian;
	char				toto;
	int					itbonus;
	float				yolo;
	float				swag;
};

typedef struct s_fract	t_fract;
struct					s_fract
{
	int					x;
	int					y;
	float				tmp;
	int					i;
	float				xzoom;
	float				yzoom;
	float				c_r;
	float				c_i;
	float				z_r;
	float				z_i;
};

void					ft_arg_error(int ac, char *str);
char					ft_arg_select(char *str);
void					ft_fractal(char c);
void					ft_julia(t_env *env);
void					ft_mandelbrot(t_env *env);
//void					ft_burningship(t_env *env);
t_fract					ft_fract_init(char c, t_fract fract);
void					ft_pixel_put_img(t_env *env,
							int x, int y, unsigned int color);
int						expose_hook(t_env *env);
int						mouse(int x, int y, t_env *env);

#endif
