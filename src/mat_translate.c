/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_translate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:41:45 by mifelida          #+#    #+#             */
/*   Updated: 2026/01/21 14:01:33 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "matrix.h"

t_mat4	mat4_translate(t_real x, t_real y, t_real z)
{
	t_mat4	res;

	res = mat4_identity();
	res.m03 = x;
	res.m13 = y;
	res.m23 = z;
	return (res);
}
