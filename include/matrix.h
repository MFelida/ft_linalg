/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:46:43 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 13:34:36 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "ft_linalg.h"

typedef union u_mat2
{
	struct
	{
		t_real	m00;
		t_real	m01;
		t_real	m10;
		t_real	m11;
	};
	t_real		a[2][2];
	t_real		flat[4];
	t_v4sr		v;
}	t_mat2;

typedef union u_mat3
{
	struct
	{
		t_real	m00;
		t_real	m01;
		t_real	m02;
		t_real	m10;
		t_real	m11;
		t_real	m12;
		t_real	m20;
		t_real	m21;
		t_real	m22;
	};
	t_real		a[3][3];
	t_real		flat[9];
	t_v16sr		v;
}	t_mat3;

typedef union u_mat4
{
	struct
	{
		t_real	m00;
		t_real	m01;
		t_real	m02;
		t_real	m03;
		t_real	m10;
		t_real	m11;
		t_real	m12;
		t_real	m13;
		t_real	m20;
		t_real	m21;
		t_real	m22;
		t_real	m23;
		t_real	m30;
		t_real	m31;
		t_real	m32;
		t_real	m33;
	};
	t_real		a[4][4];
	t_real		flat[16];
	t_v16sr		v;
}	t_mat4;

// mat2 functions
t_mat2	mat2_identity(void);
t_mat2	mat2_add(t_mat2 a, t_mat2 b);
t_mat2	mat2_scalar_mult(t_mat2 a, t_real s);
t_mat2	mat2_scale(t_real x, t_real y);
t_mat2	mat2_multiply(t_mat2 a, t_mat2 b);
t_mat2	mat2_rot(t_real rad);

// mat3 functions
t_mat3	mat3_identity(void);
t_mat3	mat3_add(t_mat3 a, t_mat3 b);
t_mat3	mat3_scalar_mult(t_mat3 a, t_real s);
t_mat3	mat3_scale(t_real x, t_real y, t_real z);
t_mat3	mat3_multiply(t_mat3 a, t_mat3 b);
t_mat3	mat3_rotx(t_real rad);
t_mat3	mat3_roty(t_real rad);
t_mat3	mat3_rotz(t_real rad);

// mat4 functions
t_mat4	mat4_identity(void);
t_mat4	mat4_add(t_mat4 a, t_mat4 b);
t_mat4	mat4_scalar_mult(t_mat4 a, t_real s);
t_mat4	mat4_scale(t_real x, t_real y, t_real z, t_real w);
t_mat4	mat4_multiply(t_mat4 a, t_mat4 b);
t_mat4	mat4_rotx(t_real rad);
t_mat4	mat4_roty(t_real rad);
t_mat4	mat4_rotz(t_real rad);
t_mat4	mat4_translate(t_real x, t_real y, t_real z);

#endif // !MATRIX_H
