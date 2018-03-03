/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 02:09:46 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/02 03:29:17 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"
#include "minos2.h"
#include "libft.h"

static int	calc_min(char **minos)
{
	int j;
	int i;
	int k;

	i = 0;
	j = 0;
	while (minos[i])
	{
		if (minos[i][20] == 'a')
			k = 2;
		else if (minos[i][20] == 'b' || minos[i][20] == 'c')
			k = 4;
		else
			k = 3;
		if (k > j)
			j = k;
		i++;
	}
	while (i * 4 > j * j)
		j++;
	return (j);
}

static char	*new_sol(int j)
{
	char	*sol;
	int		i;

	if (!(sol = (char *)malloc((j + 1) * (j + 2) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < (j + 1) * j)
	{
		if (i % (j + 1) == j)
			sol[i] = '\n';
		else
			sol[i] = '.';
		i++;
	}
	while (i < (j + 1) * (j + 2))
	{
		sol[i] = 'n';
		i++;
	}
	return (sol);
}

static int	fits(char *sol, char *mino, int i, int ctr)
{
	int a;
	int b;
	int c;
	int side;

	side = 0;
	while (sol[side] != '\n')
		side++;
	if (sol[i] != '.')
		return (0);
	a = g_mino2[(int)(mino[20] - 'a')].num1;
	a = (a / 10) * (side + 1) + (a % 10) - 2;
	b = g_mino2[(int)(mino[20] - 'a')].num2;
	b = (b / 10) * (side + 1) + (b % 10) - 2;
	c = g_mino2[(int)(mino[20] - 'a')].num3;
	c = (c / 10) * (side + 1) + (c % 10) - 2;
	if (sol[i + a] != '.' || sol[i + b] != '.' || sol[i + c] != '.')
		return (0);
	sol[i] = ctr + 'A';
	sol[i + a] = ctr + 'A';
	sol[i + b] = ctr + 'A';
	sol[i + c] = ctr + 'A';
	return (1);
}

static int	arrange(char **minos, char *sol, int side, int ctr)
{
	int		i;
	char	*sol_n;

	sol_n = ft_strdup(sol);
	i = -1;
	if (minos[ctr + 1])
		while (sol_n[++i] != 'n' && (fits(sol_n, minos[ctr], i, ctr) == 0
			|| arrange(minos, sol_n, side, ctr + 1) == 0))
			ft_strcpy(sol_n, sol);
	else
		while (sol_n[++i] != 'n' && fits(sol_n, minos[ctr], i, ctr) == 0)
			;
	if (sol_n[i] == 'n')
		return (0);
	if (!minos[ctr + 1])
		while (*sol_n != 'n')
		{
			ft_putchar(*sol_n);
			sol_n++;
		}
	return (1);
}

int			solve(char **minos)
{
	int		j;
	char	*sol;

	j = calc_min(minos);
	if (!(sol = new_sol(j)))
		return (0);
	while (arrange(minos, sol, j, 0) == 0)
	{
		j++;
		free(sol);
		sol = NULL;
		if (!(sol = new_sol(j)))
			return (0);
	}
	return (1);
}
