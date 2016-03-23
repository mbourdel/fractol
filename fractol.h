/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbourdel <mbourdel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 12:08:58 by mbourdel          #+#    #+#             */
/*   Updated: 2016/03/23 16:56:54 by mbourdel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define FRAC_1 "julia"
# define FRAC_2 "mandelbrot"
# define FRAC_3 "burning"
# define FRAC_4 "3julia"
# define FRAC_5 "3mandelbrot"
# define ESC 53
# define ENTER 36
# define SPACE 49
# define PG_UP 116
# define PG_DW 121
# define RIGHT 124
# define LEFT 123
# define END 119
# define UP 126
# define DW 125
# define ONE 18
# define TWO 19
# define THREE 20
# define LEFT_CLK 1
# define RIGHT_CLK 2
# define SCROLL_DW 4
# define SCROLL_UP 5
# define X_SIZE 800
# define Y_SIZE 600
# define IT_MUX 43

# define IT_MAX (IT_MUX + env->itbonus)

# include <math.h>
# include "mlx.h"
# include "./libft/libft.h"

typedef struct s_cursor	t_cursor;
struct					s_cursor
{
	char				zoom;
	int					x;
	int					y;
};

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
	char				tata;
	char				toto;
	char				itchange;
	int					itbonus;
	float				yolo;
	float				swag;
	double				movx;
	double				movy;
	double				zoom;
	double				x_pos;
	double				y_pos;
};

typedef struct s_fract	t_fract;
struct					s_fract
{
	int					x;
	int					y;
	double				tmp;
	int					i;
	double				c_r;
	double				c_i;
	double				z_r;
	double				z_i;
};

void					ft_arg_error(int ac, char *str);
char					ft_arg_select(char *str);
void					ft_fractal(char c);
void					ft_julia(t_env *env);
void					ft_3julia(t_env *env);
void					ft_mandelbrot(t_env *env);
void					ft_3mandelbrot(t_env *env);
void					ft_burning(t_env *env);
void					ft_pixel_put_img(t_env *env,
							int x, int y, unsigned int color);
int						expose_hook(t_env *env);
int						mouse(int x, int y, t_env *env);
int						mouse_hook(int button, int x, int y, t_env *env);

#endif
