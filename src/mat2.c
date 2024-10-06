/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:06:27 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/06 14:49:32 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "libft.h"
#include "matrix_utils.h"
#include "vector.h"

#define MAT2_N_DIMS		2
#define MAT2_N_ELEMS	4


t_mat2	mat2_identity(void)
{
	t_mat2	res;

	ft_bzero(&res, sizeof(t_mat2));
	res.m00 = 1;
	res.m11 = 1;
	return (res);
}

t_mat2	mat2_add(t_mat2 a, t_mat2 b)
{
	int		i;

	i = 0;
	while (i < MAT2_N_ELEMS)
	{
		a.flat[i] += b.flat[i];
		i++;
	}
	return (a);
}

t_mat2	mat2_scalar_mult(t_mat2 a, float s)
{
	int	i;

	i = 0;
	while (i < MAT2_N_ELEMS)
		a.flat[i] *= s;
	return (a);
}

t_mat2	mat2_multiply(t_mat2 a, t_mat2 b)
{
	int		i;
	int		j;
	t_mat2	res;

	i = 0;
	while (i < MAT2_N_DIMS)
	{
		j = 0;
		while (j < MAT2_N_DIMS)
		{
			res.elements[i][j] = vec2_dot(mat2_row_to_vec(a, i),
								mat2_col_to_vec(b, j));
			++j;
		}
		++i;
	}
	return (res);
}
