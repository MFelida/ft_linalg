/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:46:31 by mfelida           #+#    #+#             */
/*   Updated: 2025/03/05 15:26:58 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

#include <math.h>

t_vec2	vec2_add(t_vec2 a, t_vec2 b)
{
	return ((t_vec2){.x = a.x + b.x, .y = a.y + b.y});
}

float	vec2_dot(t_vec2 a, t_vec2 b)
{
	return (a.x * b.x + a.y * b.y);
}

float	vec2_length(t_vec2 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y));
}

t_vec2	vec2_scale(t_vec2 v, float s)
{
	v.x *= s;
	v.y *= s;
	return (v);
}

t_vec2	vec2_normalize(t_vec2 v)
{
	float	len;

	len = vec2_length(v);
	return (vec2_scale(v, 1.0f / len));
}
