/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:46:43 by mfelida           #+#    #+#             */
/*   Updated: 2025/03/06 14:44:28 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

typedef union u_mat2
{
	struct
	{
		float	m00;
		float	m01;
		float	m10;
		float	m11;
	};
	float	elements[2][2];
	float	flat[4];
}	t_mat2;

typedef union u_mat3
{
	struct
	{
		float	m00;
		float	m01;
		float	m02;
		float	m10;
		float	m11;
		float	m12;
		float	m20;
		float	m21;
		float	m22;
	};
	float	elements[3][3];
	float	flat[9];
}	t_mat3;

typedef union u_mat4
{
	struct
	{
		float	m00;
		float	m01;
		float	m02;
		float	m03;
		float	m10;
		float	m11;
		float	m12;
		float	m13;
		float	m20;
		float	m21;
		float	m22;
		float	m23;
		float	m30;
		float	m31;
		float	m32;
		float	m33;
	};
	float	elements[4][4];
	float	flat[16];
}	t_mat4;

// mat2 functions
t_mat2	mat2_identity(void);
t_mat2	mat2_add(t_mat2 a, t_mat2 b);
t_mat2	mat2_scalar_mult(t_mat2 a, float s);
t_mat2	mat2_scale(float x, float y);
t_mat2	mat2_multiply(t_mat2 a, t_mat2 b);
t_mat2	mat2_rot(float rad);

// mat3 functions
t_mat3	mat3_identity(void);
t_mat3	mat3_add(t_mat3 a, t_mat3 b);
t_mat3	mat3_scalar_mult(t_mat3 a, float s);
t_mat3	mat3_scale(float x, float y, float z);
t_mat3	mat3_multiply(t_mat3 a, t_mat3 b);
t_mat3	mat3_rotx(float rad);
t_mat3	mat3_roty(float rad);
t_mat3	mat3_rotz(float rad);

// mat4 functions
t_mat4	mat4_identity(void);
t_mat4	mat4_add(t_mat4 a, t_mat4 b);
t_mat4	mat4_scalar_mult(t_mat4 a, float s);
t_mat4	mat4_scale(float x, float y, float z, float w);
t_mat4	mat4_multiply(t_mat4 a, t_mat4 b);
t_mat4	mat4_rotx(float rad);
t_mat4	mat4_roty(float rad);
t_mat4	mat4_rotz(float rad);
t_mat4	mat4_translate(float x, float y, float z);

#endif // !MATRIX_H
