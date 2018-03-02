/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liba.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:56:33 by aherrera          #+#    #+#             */
/*   Updated: 2018/03/01 17:25:25 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBA_H
# define LIBA_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_list
{
	char			c;
	struct s_list	*next;
}					t_list;

typedef struct		s_mino
{
	int				num;
	int				(*m)(char *mino);
}					t_mino;

t_list				*r_fi(char *fi);
t_list				*lst_n(char c);
int					lst_a(t_list *l, char c);
char				**validate(t_list *lst);
void				solve(char **minos);
void				destroy_ar(char **ar, int i);

int					mino_0(char *mino);
int					mino_1(char *mino);
int					mino_2(char *mino);
int					mino_3(char *mino);
int					mino_4(char *mino);
int					mino_5(char *mino);
int					mino_6(char *mino);
int					mino_7(char *mino);
int					mino_8(char *mino);
int					mino_9(char *mino);
int					mino_10(char *mino);
int					mino_11(char *mino);
int					mino_12(char *mino);
int					mino_13(char *mino);
int					mino_14(char *mino);
int					mino_15(char *mino);
int					mino_16(char *mino);
int					mino_17(char *mino);
int					mino_18(char *mino);

#endif
