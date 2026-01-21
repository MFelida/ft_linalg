/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:08:17 by mfelida           #+#    #+#             */
/*   Updated: 2026/01/21 14:01:11 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linalg.h"
#include "libft.h"
#include "vector_utils.h"

#include <stdlib.h>

#define DEFAULT_SIZE 1024

static char	*_vecx_to_str(size_t n, size_t n_dec, t_real elems[])
{
	char	*temp;
	char	res[DEFAULT_SIZE];
	size_t	i;

	ft_strlcpy(res, "[", DEFAULT_SIZE);
	i = 0;
	while (i < n)
	{
		temp = ft_ftoa(elems[i++], n_dec);
		if (!temp)
			return (NULL);
		ft_strlcat(res, temp, DEFAULT_SIZE);
		free(temp);
		if (i < n)
			ft_strlcat(res, ", ", DEFAULT_SIZE);
		else
			ft_strlcat(res, "]", DEFAULT_SIZE);
	}
	return (ft_strdup(res));
}

char	*vec2_to_str(t_vec2 v, size_t n_dec)
{
	return (_vecx_to_str(2, n_dec, v.a));
}

char	*vec3_to_str(t_vec3 v, size_t n_dec)
{
	return (_vecx_to_str(3, n_dec, v.a));
}

char	*vec4_to_str(t_vec4 v, size_t n_dec)
{
	return (_vecx_to_str(4, n_dec, v.a));
}
