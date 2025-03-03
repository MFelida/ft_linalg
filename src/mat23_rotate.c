/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat23_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:48:26 by mifelida          #+#    #+#             */
/*   Updated: 2025/03/03 23:25:29 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

#include <math.h>

t_mat2	mat2_rot(float rad)
{
	t_mat2	m;

	m.m00 = cosf(rad);
	m.m10 = sinf(rad);
	m.m01 = -sinf(rad);
	m.m11 = cosf(rad);
	return (m);
}

// Rotations are perform counter-clockwise when viewed from the positive axis
t_mat3	mat3_rotx(float rad)
{
	t_mat3	m;

	m = mat3_identity();
	m.m11 = cosf(rad);
	m.m12 = -sinf(rad);
	m.m21 = sinf(rad);
	m.m22 = cosf(rad);
	return (m);
}

t_mat3	mat3_roty(float rad)
{
	t_mat3	m;

	m = mat3_identity();
	m.m00 = cosf(rad);
	m.m02 = -sinf(rad);
	m.m20 = sinf(rad);
	m.m22 = cosf(rad);
	return (m);
}

t_mat3	mat3_rotz(float rad)
{
	t_mat3	m;

	m = mat3_identity();
	m.m00 = cosf(rad);
	m.m01 = sinf(rad);
	m.m10 = -sinf(rad);
	m.m11 = cosf(rad);
	return (m);
}
