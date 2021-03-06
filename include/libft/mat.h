/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:39:46 by nfinkel           #+#    #+#             */
/*   Updated: 2019/03/11 23:14:45 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT_H
# define MAT_H

# include <math.h>
# include "../dependencies.h"

typedef struct	s_complex
{
	double		r;
	double		i;
}				t_complex;

extern int32_t	ft_32npow(int32_t nb, uint8_t power);
extern int64_t	ft_64npow(int64_t nb, uint8_t power);
extern size_t	ft_stnpow(size_t nb, uint8_t power);
extern size_t	ft_stnxpow2(size_t nb);
extern double	ft_zpowi(t_complex z, uint8_t n);
extern double	ft_zpowr(t_complex z, uint8_t n);

#endif
