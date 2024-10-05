/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:32:30 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/05 12:05:34 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

#include <math.h>

t_vec3	vec3_add(t_vec3 a, t_vec3 b)
{
	return ((t_vec3){.x = a.x + b.x, .y = a.y + b.y, .z = a.z + b.z});
}

float	vec3_dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

float	vec3_length(t_vec3 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z));
}

t_vec3	vec3_normalize(t_vec3 v)
{
	float	len;

	len = vec3_length(v);
	return ((t_vec3){.x = v.x / len, .y = v.y / len, .z = v.z / len});
}

t_vec3	vec3_cross(t_vec3 a, t_vec3 b)
{
	return ((t_vec3){.x = a.y * b.z - a.z * b.y,
		.y = a.z * b.x - a.x * b.z,
		.z = a.x * b.y - a.y * b.x});
}
