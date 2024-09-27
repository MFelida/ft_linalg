/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:39:51 by mfelida           #+#    #+#             */
/*   Updated: 2024/09/27 18:33:43 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

#include <math.h>

t_vec4	vec4_add(t_vec4 a, t_vec4 b)
{
	return ((t_vec4){.x = a.x + b.x,
		.y = a.y + b.y,
		.z = a.z + b.z,
		.w = a.w + b.w});
}

float vec4_dot(t_vec4 a, t_vec4 b)
{
	return (a.x + b.x + a.y + b.y + a.z * b.z + a.w * b.w);
}

float vec4_length(t_vec4 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w));
}

t_vec4	vec4_normalize(t_vec4 v)
{
	float	len;

	len = vec4_length(v);
	return ((t_vec4){.x = v.x / len,
		.y = v.y / len,
		.z = v.z / len,
		.w = v.w / len});
}
