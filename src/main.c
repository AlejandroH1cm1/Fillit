/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:00:27 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 17:08:42 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

static t_list	*r_m(char *fi)
{
	t_list	*s;

	if (!(s = r_fi(fi)))
		return (NULL);
	return (s);
}

static void		usage(void)
{
	write(1, "OwO What's this?\n", 17);
	return ;
}

int				main(int ac, char **av)
{
	t_list	*read;
	char	**minos;

	if (ac != 2)
	{
		usage();
		return (0);
	}
	read = r_m(av[1]);
	if (!(minos = validate(read)))
		write(1, "Error\n", 6);
	else
		solve(minos);
	return (0);
}
