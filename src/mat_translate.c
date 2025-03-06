/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_translate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:41:45 by mifelida          #+#    #+#             */
/*   Updated: 2025/03/06 14:54:58 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

t_mat4	mat4_translate(float x, float y, float z)
{
	t_mat4	res;

	res = mat4_identity();
	res.m03 = x;
	res.m13 = y;
	res.m23 = z;
	return (res);
}
