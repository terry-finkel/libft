/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:39:23 by nfinkel           #+#    #+#             */
/*   Updated: 2018/04/21 20:42:02 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/list.h"
#include "libft/mem.h"

t_list			*ft_lstnew(const void *data, size_t data_size)
{
	t_list		*list;

	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (data)
	{
		list->data = ft_malloc(data_size);
		list->data = ft_memmove(list->data, data, data_size);
		list->data_size = data_size;
	}
	GIMME(list);
}

t_dlist			*ft_dlstnew(const void *data, size_t data_size)
{
	t_dlist		*dlist;

	dlist = (t_dlist *)ft_memalloc(sizeof(t_dlist));
	if (data)
	{
		dlist->data = ft_malloc(data_size);
		dlist->data = ft_memmove(dlist->data, data, data_size);
		dlist->data_size = data_size;
	}
	GIMME(dlist);
}
