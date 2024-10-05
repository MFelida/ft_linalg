/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:06:27 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/05 14:35:28 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "libft.h"
#include "matrix_utils.h"
#include "vector.h"

#define MAT4_N_DIMS		4
#define MAT4_N_ELEMS	16


t_mat4	mat4_identity(void)
{
	t_mat4	res;

	ft_bzero(&res, sizeof(t_mat4));
	res.m00 = 1;
	res.m11 = 1;
	res.m22 = 1;
	res.m33 = 1;
	return (res);
}

t_mat4	mat4_add(t_mat4 a, t_mat4 b)
{
	int		i;

	i = 0;
	while (i < MAT4_N_ELEMS)
	{
		a.flat[i] += b.flat[i];
		i++;
	}
	return (a);
}

t_mat4	mat4_scalar_mult(t_mat4 a, float s)
{
	int	i;

	i = 0;
	while (i < MAT4_N_ELEMS)
		a.flat[i] *= s;
	return (a);
}

t_mat4	mat4_multiply(t_mat4 a, t_mat4 b)
{
	int		i;
	int		j;
	t_mat4	res;

	i = 0;
	j = 0;
	while (i < MAT4_N_DIMS)
	{
		while (j < MAT4_N_DIMS)
		{
			res.elements[i][j] = vec4_dot(mat4_col_to_vec(a, j),
								mat4_row_to_vec(b, i));
			++j;
		}
		++i;
	}
	return (res);
}
