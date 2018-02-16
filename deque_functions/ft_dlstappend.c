/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/03 14:19:14 by nfinkel           #+#    #+#             */
/*   Updated: 2018/02/16 15:48:01 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./deque.h"

void		ft_dlstappend(t_dlist *restrict dlist, t_dlist *restrict newlink)
{
	while (dlist->next)
		dlist = dlist->next;
	dlist->next = newlink;
	newlink->prev = dlist;
}