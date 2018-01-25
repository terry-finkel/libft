/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 20:00:10 by nfinkel           #+#    #+#             */
/*   Updated: 2018/01/25 14:18:41 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/dependencies.h"
#include "./character.h"

int			ft_isalpha(int c)
{
	GIMME(ft_islower(c) || ft_isupper(c));
}
