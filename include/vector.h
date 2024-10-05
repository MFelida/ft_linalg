/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:30:58 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/05 13:39:44 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
typedef union u_vec2
{
	struct
	{
		float	x;
		float	y;
	};
	float	elements[2];
}	t_vec2;

typedef	union u_vec3
{
	struct
	{
		float	x;
		float	y;
		float	z;
	};
	t_vec2	xy;
	float	elements[3];
}	t_vec3;

typedef union u_vec4 
{
	struct
	{
		float	x;
		float	y;
		float	z;
		float	w;
	};
	t_vec3	xyz;
	t_vec2	xy;
	float	elements[4];
} t_vec4;

// t_vec2 funcs
t_vec2	vec2_add(t_vec2 a, t_vec2 b);
float	vec2_dot(t_vec2 a, t_vec2 b);
float	vec2_length(t_vec2 v);
t_vec2	vec2_normalize(t_vec2 v);

// t_vec3 funcs
t_vec3	vec3_add(t_vec3 a, t_vec3 b);
float	vec3_dot(t_vec3 a, t_vec3 b);
float	vec3_length(t_vec3 v);
t_vec3	vec3_normalize(t_vec3 v);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);

// t_vec4 funcs
t_vec4	vec4_add(t_vec4 a, t_vec4 b);
float	vec4_dot(t_vec4 a, t_vec4 b);
float	vec4_length(t_vec4 v);
t_vec4	vec4_normalize(t_vec4 v);

#endif // !VECTOR_H
