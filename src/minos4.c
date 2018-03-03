/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:53:27 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/02 02:54:00 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

int	mino_15(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 4] == '#') && (mino[i + 5] == '#') && (mino[i + 6] == '#'))
	{
		mino[20] = 'p';
		return (1);
	}
	return (0);
}

int	mino_16(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 10] == '#') && (mino[i + 6] == '#'))
	{
		mino[20] = 'q';
		return (1);
	}
	return (0);
}

int	mino_17(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 2] == '#') && (mino[i + 6] == '#'))
	{
		mino[20] = 'r';
		return (1);
	}
	return (0);
}

int	mino_18(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 4] == '#') && (mino[i + 5] == '#') && (mino[i + 10] == '#'))
	{
		mino[20] = 's';
		return (1);
	}
	return (0);
}
