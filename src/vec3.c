/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:32:30 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 14:10:10 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "vector.h"

#include <math.h>

t_vec3	vec3_add(t_vec3 a, t_vec3 b)
{
	return ((t_vec3)(a.v + b.v));
}

t_real	vec3_dot(t_vec3 a, t_vec3 b)
{
	a.v *= b.v;
	return (a.x + a.y + a.z);
}

t_real	vec3_length(t_vec3 v)
{
	v.v *= v.v;
	return (sqrtf(v.x + v.y + v.z));
}

t_vec3	vec3_scale(t_vec3 v, t_real s)
{
	return ((t_vec3)(v.v * (t_v4sr){s, s, s, s}));
}

t_vec3	vec3_normalize(t_vec3 v)
{
	t_real	len;

	len = vec3_length(v);
	return (vec3_scale(v, 1.0f / len));
}
