/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_update.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:53:54 by nfinkel           #+#    #+#             */
/*   Updated: 2019/03/11 21:52:32 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/vec.h"

inline t_p2	*ft_p2update(t_p2 *point, const int x, const int y)
{
	point->x = x;
	point->y = y;
	return (point);
}

inline t_v3	*ft_v3update(t_v3 *vec, const double x, const double y,
			const double z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

inline t_v4	*ft_v4update(t_v4 *vec, const double x, const double y,
			const double z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}
