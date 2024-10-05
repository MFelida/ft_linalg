/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:38:21 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/06 00:16:52 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_UTILS_H
# define MATRIX_UTILS_H

#include "matrix.h"
#include "vector.h"

t_vec2	mat2_row_to_vec(t_mat2 m, int row);
t_vec2	mat2_col_to_vec(t_mat2 m, int col);
char	*mat2_to_str(t_mat2	m, int	n_dec);

t_vec3	mat3_row_to_vec(t_mat3 m, int row);
t_vec3	mat3_col_to_vec(t_mat3 m, int col);
char	*mat3_to_str(t_mat3	m, int	n_dec);

t_vec4	mat4_row_to_vec(t_mat4 m, int row);
t_vec4	mat4_col_to_vec(t_mat4 m, int col);
char	*mat4_to_str(t_mat4	m, int	n_dec);

#endif // !MATRIX_UTILS_H
