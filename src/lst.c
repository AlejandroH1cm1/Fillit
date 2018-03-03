/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_n.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 12:52:41 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/02 03:37:35 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

void	lst_destroy(t_list **lst)
{
	if ((*lst)->next != NULL)
		lst_destroy(&((*lst)->next));
	free(*lst);
	*lst = NULL;
}

t_list	*lst_n(char c)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->c = c;
	new->next = (NULL);
	return (new);
}

int		lst_a(t_list *l, char c)
{
	if (!l)
		return (0);
	while (l->next != NULL)
		l = l->next;
	if (!(l->next = lst_n(c)))
		return (0);
	return (1);
}
