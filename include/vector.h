/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:58 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 13:35:15 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "ft_linalg.h"
# include "matrix.h"

typedef union u_vec2
{
	struct
	{
		t_real	x;
		t_real	y;
	};
	t_real		a[2];
	t_v2sr		v;
}	t_vec2;

typedef union u_vec3
{
	struct
	{
		t_real	x;
		t_real	y;
		t_real	z;
	};
	t_vec2		xy;
	t_real		a[3];
	t_v4sr		v;
}	t_vec3;

typedef union u_vec
{
	struct
	{
		t_real	x;
		t_real	y;
		t_real	z;
		t_real	w;
	};
	t_vec3		xyz;
	t_vec2		xy;
	t_real		a[4];
	t_v4sr		v;
}	t_vec4;

// t_vec2 funcs
t_vec2	vec2_add(t_vec2 a, t_vec2 b);
t_real	vec2_dot(t_vec2 a, t_vec2 b);
t_real	vec2_length(t_vec2 v);
t_vec2	vec2_scale(t_vec2 v, t_real s);
t_vec2	vec2_normalize(t_vec2 v);
t_vec2	vec2_transform(t_mat2 m, t_vec2 v);

// t_vec3 funcs
t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_real	vec3_dot(t_vec3 a, t_vec3 b);
t_real	vec3_length(t_vec3 v);
t_vec3	vec3_scale(t_vec3 v, t_real s);
t_vec3	vec3_normalize(t_vec3 v);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);
t_vec3	vec3_transform(t_mat3 m, t_vec3 v);

// t_vec4 funcs
t_vec4	vec4_add(t_vec4 a, t_vec4 b);
t_real	vec4_dot(t_vec4 a, t_vec4 b);
t_real	vec4_length(t_vec4 v);
t_vec4	vec4_scale(t_vec4 v, t_real s);
t_vec4	vec4_normalize(t_vec4 v);
t_vec4	vec4_transform(t_mat4 m, t_vec4 v);

#endif // !VECTOR_H
