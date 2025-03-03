/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:26:07 by mfelida           #+#    #+#             */
/*   Updated: 2025/03/03 12:52:42 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_UTILS_H
# define VECTOR_UTILS_H

# include "vector.h"

# include <stdlib.h>

char	*vec2_to_str(t_vec2 v, size_t n_dec);
char	*vec3_to_str(t_vec3 v, size_t n_Dec);
char	*vec4_to_str(t_vec4 v, size_t n_dec);

#endif
