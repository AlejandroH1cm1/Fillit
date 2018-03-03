/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:00:27 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/02 19:23:16 by aherrera         ###   ########.fr       */
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
	write(1, "usage: fillit file\n", 19);
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
		write(1, "error\n", 6);
	else
	{
		if (!solve(minos))
			write(1, "error\n", 6);
		destroy_ar(minos, (1 + count_m(read)) / 21);
		free(minos);
	}
	if (read)
		lst_destroy(&read);
	return (0);
}
