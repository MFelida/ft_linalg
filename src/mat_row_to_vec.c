/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_row_to_vec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:49:35 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/05 14:05:31 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_utils.h"
#include "vector.h"

t_vec2	mat2_row_to_vec(t_mat2 m, int row)
{
	t_vec2	res;
	int		i;

	i = 0;
	while (i < 2)
	{
		res.elements[i] = m.elements[row][i];
		++i;
	}
	return (res);
}

t_vec3	mat3_row_to_vec(t_mat3 m, int row)
{
	t_vec3	res;
	int		i;

	i = 0;
	while (i < 3)
	{
		res.elements[i] = m.elements[row][i];
		++i;
	}
	return (res);
}

t_vec4	mat4_row_to_vec(t_mat4 m, int row)
{
	t_vec4	res;
	int		i;

	i = 0;
	while (i < 4)
	{
		res.elements[i] = m.elements[row][i];
		++i;
	}
	return (res);
}
