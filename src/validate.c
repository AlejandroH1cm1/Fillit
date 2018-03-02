#include "liba.h"
#include "minos.h"

static int		count_m(t_list *lst)
{
	int		i;
	char	c;

	i = 0;
	while (lst->next)
	{
		c = lst->c;
		if (c != '\n' && c != '.' && c != '#')
			return (0);
		lst = lst->next;
		i++;
	}
	if ((i + 1) % 21 != 0)
		return (0);
	return (i);
}

static char		*aux2(t_list *lst, int j)
{
	int		k;
	char	*s;

	s = (char *)malloc(22 * sizeof(char));
	k = 0;
	while (k < j * 21)
	{
		lst = lst->next;
		k++;
	}
	k = 0;
	while (k < 20)
	{
		s[k] = lst->c;
		lst = lst->next;
		k++;
	}
	s[k] = '0';
	s[k + 1] = '\0';
	return (s);
}

static char		**aux(t_list *lst, int i)
{
	char	**ar;
	int		j;

	if (!(ar = (char **)malloc(((i + 1) / 21 + 1) * sizeof(char *))))
		return (NULL);
	j = 0;
	while (j < (i + 1) / 21)
	{
		if (!(ar[j] = aux2(lst, j)))
		{
			destroy_ar(ar, (i + 1) / 21);
			free(ar);
			return (NULL);
		}
		j++;
	}
	return (ar);
}

static	int		check_m(char *mino, t_mino *tab)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	j = 0;
	k = 0;
	l = 0;
	while (mino[i++] != '0')
		if (mino[i] == '.')
			j++;
		else if (mino[i] == '#')
			k++;
		else if (mino[i] == '\n')
			l++;
	if (j != 12 || k != 4 || l != 4)
		return (0);
	i = 0;
	while (i < 19 && tab[i].m(mino) == 0)
		i++;
	return (tab[i].m(mino));
}

char			**validate(t_list *lst)
{
	char	**ar;
	int		i;
	int		j;

	if (!lst)
		return (NULL);
	i = count_m(lst);
	if (i == 0)
		return (NULL);
	j = 0;
	if (!(ar = aux(lst, i)))
		return (NULL);
	while (j < (i + 1) / 21)
	{
		if (check_m(ar[j], g_mino) == 0)
		{
			destroy_ar(ar, (i + 1) / 21);
			free(ar);
			return (NULL);
		}
		printf("%s\n",ar[j]);
		j++;
	}
	return (ar);
}
