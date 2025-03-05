/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:32:30 by mfelida           #+#    #+#             */
/*   Updated: 2025/03/05 15:27:43 by mifelida         ###   ########.fr       */
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

t_vec3	vec3_scale(t_vec3 v, float s)
{
	v.x *= s;
	v.y *= s;
	v.z *= s;
	return (v);
}

t_vec3	vec3_normalize(t_vec3 v)
{
	float	len;

	len = vec3_length(v);
	return (vec3_scale(v, 1.0f / len));
}
