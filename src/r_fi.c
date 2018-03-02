/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_fi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:58:05 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 16:56:57 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

t_list		*r_fi(char *fi)
{
	int		fd;
	int		r;
	t_list	*tmp;
	t_list	*lst;
	char	c;

	if (!(lst = lst_n(0)))
		return (NULL);
	tmp = lst;
	fd = open(fi, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while ((r = read(fd, &c, 1)) != 0)
	{
		tmp->c = c;
		if (!(lst_a(tmp, 0)))
		{
			close(fd);
			return (NULL);
		}
		tmp = tmp->next;
	}
	close(fd);
	return (lst);
}
