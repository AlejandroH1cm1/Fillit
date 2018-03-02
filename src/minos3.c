/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:53:36 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 17:48:21 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

int	mino_10(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 9] == '#') && (mino[i + 10] == '#'))
	{
		mino[20] = 'k';
		return (1);
	}
	return (0);
}

int	mino_11(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 3] == '#') && (mino[i + 4] == '#') && (mino[i + 5] == '#'))
	{
		mino[20] = 'l';
		return (1);
	}
	return (0);
}

int	mino_12(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 10] == '#') && (mino[i + 11] == '#'))
	{
		mino[20] = 'm';
		return (1);
	}
	return (0);
}

int	mino_13(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 2] == '#') && (mino[i + 5] == '#'))
	{
		mino[20] = 'n';
		return (1);
	}
	return (0);
}

int	mino_14(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 6] == '#') && (mino[i + 11] == '#'))
	{
		mino[20] = 'o';
		return (1);
	}
	return (0);
}
