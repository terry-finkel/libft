/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:45:50 by nfinkel           #+#    #+#             */
/*   Updated: 2018/03/14 10:38:16 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/list.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list		*begin;
	t_list		*new;
	t_list		*tmp;

	tmp = f(lst);
	new = ft_lstnew(tmp->data, tmp->data_size);
	begin = new;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		new->next = ft_lstnew(tmp->data, tmp->data_size);
		lst = lst->next;
		new = new->next;
	}
	GIMME(begin);
}
