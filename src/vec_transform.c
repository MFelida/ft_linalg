/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_transform.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:37:36 by mifelida          #+#    #+#             */
/*   Updated: 2025/03/04 10:42:47 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix_utils.h"
#include "vector.h"
#include "matrix.h"

t_vec2	vec2_transform(t_mat2 m, t_vec2 v)
{
	t_vec2	res;

	res.x = vec2_dot(v, mat2_row_to_vec(m, 0));
	res.y = vec2_dot(v, mat2_row_to_vec(m, 1));
	return (res);
}

t_vec3	vec3_transform(t_mat3 m, t_vec3 v)
{
	t_vec3	res;

	res.x = vec3_dot(v, mat3_row_to_vec(m, 0));
	res.y = vec3_dot(v, mat3_row_to_vec(m, 1));
	res.z = vec3_dot(v, mat3_row_to_vec(m, 2));
	return (res);
}

t_vec4	vec4_transform(t_mat4 m, t_vec4 v)
{
	t_vec4	res;

	res.x = vec4_dot(v, mat4_row_to_vec(m, 0));
	res.y = vec4_dot(v, mat4_row_to_vec(m, 1));
	res.z = vec4_dot(v, mat4_row_to_vec(m, 2));
	res.w = vec4_dot(v, mat4_row_to_vec(m, 3));
	return (res);
}
