/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:26:19 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 17:46:53 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

int	mino_0(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 5] == '#') && (mino[i + 6] == '#'))
	{
		mino[20] = 'a';
		return (1);
	}
	return (0);
}

int	mino_1(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 10] == '#') && (mino[i + 15] == '#'))
	{
		mino[20] = 'b';
		return (1);
	}
	return (0);
}

int	mino_2(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 2] == '#') && (mino[i + 3] == '#'))
	{
		mino[20] = 'c';
		return (1);
	}
	return (0);
}

int	mino_3(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 5] == '#') && (mino[i + 4] == '#'))
	{
		mino[20] = 'd';
		return (1);
	}
	return (0);
}

int	mino_4(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 6] == '#') && (mino[i + 11] == '#'))
	{
		mino[20] = 'e';
		return (1);
	}
	return (0);
}
