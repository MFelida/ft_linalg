/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:18:01 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/06 01:03:24 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "matrix.h"
#include "matrix_utils.h"
#include "vector_utils.h"

#include <stddef.h>

char	*mat2_to_str(t_mat2 m, int n_dec)
{
	char	*res;
	char	*prev;
	char	*temp;
	int		i;
	
	res = ft_strdup("");
	prev = res;
	i = 0;
	while (i < 2)
	{
		temp = vec2_to_str(mat2_row_to_vec(m, i++), n_dec);
		res = ft_strjoin(res, temp);
		free(temp);
		free(prev);
		prev = res;
		res = ft_strjoin(res, "\n");
		free(prev);
		prev = res;
	}
	return (res);
}

char	*mat3_to_str(t_mat3 m, int n_dec)
{
	char	*res;
	char	*prev;
	char	*temp;
	int		i;
	
	res = ft_strdup("");
	prev = res;
	i = 0;
	while (i < 3)
	{
		temp = vec3_to_str(mat3_row_to_vec(m, i++), n_dec);
		res = ft_strjoin(res, temp);
		free(temp);
		free(prev);
		prev = res;
		res = ft_strjoin(res, "\n");
		free(prev);
		prev = res;
	}
	return (res);
}

char	*mat4_to_str(t_mat4 m, int n_dec)
{
	char	*res;
	char	*prev;
	char	*temp;
	int		i;
	
	res = ft_strdup("");
	prev = res;
	i = 0;
	while (i < 4)
	{
		temp = vec4_to_str(mat4_row_to_vec(m, i++), n_dec);
		res = ft_strjoin(res, temp);
		free(temp);
		free(prev);
		prev = res;
		res = ft_strjoin(res, "\n");
		free(prev);
		prev = res;
	}
	return (res);
}
