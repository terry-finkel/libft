/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:37:57 by nfinkel           #+#    #+#             */
/*   Updated: 2017/08/24 18:40:06 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		++s1;
		++s2;
	}
	return (*s1 == *s2 ? 1 : 0);
}
