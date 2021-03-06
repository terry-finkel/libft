/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 11:39:22 by nfinkel           #+#    #+#             */
/*   Updated: 2019/03/11 21:40:33 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/hdl.h"
#include "libft/io.h"

inline ssize_t	ft_read(int filedes, void *buf, size_t nbyte)
{
	ssize_t	bytes;

	if ((bytes = read(filedes, buf, nbyte)) == -1)
		ft_errhdl(NULL, 0, errno, ERR_NO);
	return (bytes);
}

inline ssize_t	ft_write(int filedes, const void *buf, size_t nbyte)
{
	ssize_t	bytes;

	if ((bytes = write(filedes, buf, nbyte)) == -1)
		ft_errhdl(NULL, 0, errno, ERR_NO);
	return (bytes);
}
