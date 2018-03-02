/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:33:25 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 17:46:43 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liba.h"

int	mino_5(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 6] == '#') && (mino[i + 7] == '#'))
	{
		mino[20] = 'f';
		return (1);
	}
	return (0);
}

int	mino_6(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 4] == '#') && (mino[i + 9] == '#'))
	{
		mino[20] = 'g';
		return (1);
	}
	return (0);
}

int	mino_7(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 5] == '#') && (mino[i + 6] == '#') && (mino[i + 7] == '#'))
	{
		mino[20] = 'h';
		return (1);
	}
	return (0);
}

int	mino_8(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 5] == '#') && (mino[i + 10] == '#'))
	{
		mino[20] = 'i';
		return (1);
	}
	return (0);
}

int	mino_9(char *mino)
{
	int i;

	i = 0;
	while (mino[i] != '#')
		i++;
	if ((mino[i + 1] == '#') && (mino[i + 2] == '#') && (mino[i + 7] == '#'))
	{
		mino[20] = 'j';
		return (1);
	}
	return (0);
}
