/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 12:55:47 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 16:56:11 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

int	lst_a(t_list *l, char c)
{
	if (!l)
		return (0);
	while (l->next != NULL)
		l = l->next;
	if (!(l->next = lst_n(c)))
		return (0);
	return (1);
}