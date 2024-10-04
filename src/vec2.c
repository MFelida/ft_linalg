/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:46:31 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/04 22:57:59 by mfelida          ###   ########.fr       */
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

t_vec2	vec2_normalize(t_vec2 v)
{
	float	len;

	len = vec2_length(v);
	return ((t_vec2){.x = v.x / len, .y = v.y / len});
}
