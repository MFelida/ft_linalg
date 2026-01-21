/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_col_to_vec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:06:01 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 13:48:31 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_utils.h"
#include "vector.h"

t_vec2	mat2_col_to_vec(t_mat2 m, int col)
{
	t_vec2	res;
	int		i;

	i = 0;
	while (i < 2)
	{
		res.a[i] = m.a[i][col];
		++i;
	}
	return (res);
}

t_vec3	mat3_col_to_vec(t_mat3 m, int col)
{
	t_vec3	res;
	int		i;

	i = 0;
	while (i < 3)
	{
		res.a[i] = m.a[i][col];
		++i;
	}
	return (res);
}

t_vec4	mat4_col_to_vec(t_mat4 m, int col)
{
	t_vec4	res;
	int		i;

	i = 0;
	while (i < 4)
	{
		res.a[i] = m.a[i][col];
		++i;
	}
	return (res);
}
