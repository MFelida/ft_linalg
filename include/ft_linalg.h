/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linalg.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifelida <mifelida@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:18:53 by mifelida          #+#    #+#             */
/*   Updated: 2026/01/21 13:33:54 by mifelida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINALG_H
# define FT_LINALG_H
# include <float.h>

# define FT_LDOUBLE	80
# define FT_DOUBLE	64
# define FT_FLOAT	32

# if defined FT_REAL && FT_REAL == FT_LDOUBLE
# define FT_REAL      FT_LDOUBLE
# define REAL_MAX     LDBL_MAX
# define REAL_MIN     LDBL_MIN
# define REAL_EPSILON LDBL_EPSILON

typedef long double												t_real;
# elif defined FT_REAL && FT_REAL == FT_DOUBLE
# define FT_REAL      FT_DOUBLE
# define REAL_MAX     DBL_MAX
# define REAL_MIN     DBL_MIN
# define REAL_EPSILON DBL_EPSILON

typedef double                           t_real;
# else
# define FT_REAL      FT_FLOAT
# define REAL_MAX     FLT_MAX
# define REAL_MIN     FLT_MIN
# define REAL_EPSILON FLT_EPSILON

typedef float														t_real;
# endif

typedef t_real __attribute__ ((vector_size(sizeof(t_real) * 2)))	t_v2sr;
typedef t_real __attribute__ ((vector_size(sizeof(t_real) * 4)))	t_v4sr;
typedef t_real __attribute__ ((vector_size(sizeof(t_real) * 8)))	t_v8sr;
typedef t_real __attribute__ ((vector_size(sizeof(t_real) * 16)))	t_v16sr;

// What the actual fuck norminette
#endif
