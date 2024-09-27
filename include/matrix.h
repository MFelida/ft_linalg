/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:46:43 by mfelida           #+#    #+#             */
/*   Updated: 2024/09/27 18:05:23 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

#include "vector.h"

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


#endif // !MATRIX_H
