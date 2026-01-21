/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:39:51 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 14:10:20 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "vector.h"

#include <math.h>

t_vec4	vec4_add(t_vec4 a, t_vec4 b)
{
	return ((t_vec4)(a.v + b.v));
}

t_real	vec4_dot(t_vec4 a, t_vec4 b)
{
	a.v *= b.v;
	return (a.x + a.y + a.z + a.w);
}

t_real	vec4_length(t_vec4 v)
{
	v.v *= v.v;
	return (sqrtf(v.x + v.y + v.z + v.w));
}

t_vec4	vec4_scale(t_vec4 v, t_real s)
{
	return ((t_vec4)(v.v * (t_v4sr){s, s, s, s}));
}

t_vec4	vec4_normalize(t_vec4 v)
{
	return (vec4_scale(v, 1.0f / vec4_length(v)));
}
