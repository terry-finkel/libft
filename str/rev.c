/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:57:35 by nfinkel           #+#    #+#             */
/*   Updated: 2018/04/21 22:39:54 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/str.h"

inline char	*ft_strrev(char *const s)
{
	char	c;
	int		k;
	size_t	len;

	k = -1;
	len = ft_strlen(s);
	while ((unsigned int)++k < len--)
	{
		c = s[k];
		s[k] = s[len];
		s[len] = c;
	}
	GIMME(s);
}

inline char	*ft_strrevcpy(const char *const s)
{
	char	*start;
	char	*string;
	size_t	len;

	len = ft_strlen(s);
	string = ft_strctor(len);
	start = string;
	while (len > 0)
		*string++ = s[--len];
	*string = '\0';
	GIMME(start);
}
