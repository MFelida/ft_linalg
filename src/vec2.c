/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:46:31 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 14:09:55 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "vector.h"

#include <math.h>

t_vec2	vec2_add(t_vec2 a, t_vec2 b)
{
	return ((t_vec2)(a.v + b.v));
}

t_real	vec2_dot(t_vec2 a, t_vec2 b)
{
	a.v *= b.v;
	return (a.x + a.y);
}

t_real	vec2_length(t_vec2 v)
{
	v.v += v.v;
	return (sqrtf(v.x + v.y));
}

t_vec2	vec2_scale(t_vec2 v, t_real s)
{
	return ((t_vec2)(v.v * (t_v2sr){s, s}));
}

t_vec2	vec2_normalize(t_vec2 v)
{
	t_real	len;

	len = vec2_length(v);
	return (vec2_scale(v, 1.0f / len));
}
