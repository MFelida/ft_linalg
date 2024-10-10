/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:08:17 by mfelida           #+#    #+#             */
/*   Updated: 2024/10/10 23:15:44 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector_utils.h"
#include "libft.h"
#include <stdlib.h>

static char	*_vecx_to_str(size_t n, size_t n_dec, float elems[])
{
	char	*temp;
	char	*res;
	char	*prev;
	size_t	i;

	res = ft_strdup("[");
	if (!res)
		return (NULL);
	i = 0;
	while (i < n)
	{
		temp = ft_ftoa(elems[i++], n_dec);
		if (!temp)
		{
			free(res);
			return (NULL);
		}
		prev = res;
		res = ft_strjoin(res, temp);
		free(prev);
		free(temp);
		if (!res)
			return (NULL);
		prev = res;
		if (i < n)
			res = ft_strjoin(res, ", ");
		else
			res = ft_strjoin(res, "]");
		free(prev);
		if (!res)
			return (NULL);
	}
	return (res);
}

char *vec2_to_str(t_vec2 v, size_t n_dec)
{
	return (_vecx_to_str(2, n_dec, v.elements));
}

char *vec3_to_str(t_vec3 v, size_t n_dec)
{
	return (_vecx_to_str(3, n_dec, v.elements));
}

char *vec4_to_str(t_vec4 v, size_t n_dec)
{
	return (_vecx_to_str(4, n_dec, v.elements));
}

