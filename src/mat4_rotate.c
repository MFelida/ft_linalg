/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 23:13:41 by mifelida          #+#    #+#             */
/*   Updated: 2026/01/21 14:03:01 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "matrix.h"

#include <math.h>

// Rotations are perform counter-clockwise when viewed from the positive axis
t_mat4	mat4_rotx(t_real rad)
{
	t_mat4	m;

	m = mat4_identity();
	m.m11 = cosf(rad);
	m.m12 = -sinf(rad);
	m.m21 = sinf(rad);
	m.m22 = cosf(rad);
	return (m);
}

t_mat4	mat4_roty(t_real rad)
{
	t_mat4	m;

	m = mat4_identity();
	m.m00 = cosf(rad);
	m.m02 = -sinf(rad);
	m.m20 = sinf(rad);
	m.m22 = cosf(rad);
	return (m);
}

t_mat4	mat4_rotz(t_real rad)
{
	t_mat4	m;

	m = mat4_identity();
	m.m00 = cosf(rad);
	m.m01 = sinf(rad);
	m.m10 = -sinf(rad);
	m.m11 = cosf(rad);
	return (m);
}
