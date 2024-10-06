/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:06:27 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/06 14:49:02 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "libft.h"
#include "matrix_utils.h"
#include "vector.h"

#define MAT3_N_DIMS		3
#define MAT3_N_ELEMS	9


t_mat3	mat3_identity(void)
{
	t_mat3	res;

	ft_bzero(&res, sizeof(t_mat3));
	res.m00 = 1;
	res.m11 = 1;
	res.m22	= 1;
	return (res);
}

t_mat3	mat3_add(t_mat3 a, t_mat3 b)
{
	int		i;

	i = 0;
	while (i < MAT3_N_ELEMS)
	{
		a.flat[i] += b.flat[i];
		i++;
	}
	return (a);
}

t_mat3	mat3_scalar_mult(t_mat3 a, float s)
{
	int	i;

	i = 0;
	while (i < MAT3_N_ELEMS)
		a.flat[i] *= s;
	return (a);
}

t_mat3	mat3_multiply(t_mat3 a, t_mat3 b)
{
	int		i;
	int		j;
	t_mat3	res;

	i = 0;
	while (i < MAT3_N_DIMS)
	{
		j = 0;
		while (j < MAT3_N_DIMS)
		{
			res.elements[i][j] = vec3_dot(mat3_row_to_vec(a, i),
								mat3_col_to_vec(b, j));
			++j;
		}
		++i;
	}
	return (res);
}
