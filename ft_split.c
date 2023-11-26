/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:49:11 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/25 22:01:57 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free(char **list)
{
	size_t	i;

	i = 0;
	while (list[0])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

static int	ft_get_str_nbr(const char *str, char c)
{
	int	i;
	int	s_nbr;

	i = 0;
	s_nbr = 0;
	if (!str[0])
		return (0);
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			s_nbr++;
			while (str[i] == c && str[i])
			{
				i++;
			}
			continue ;
		}
		i++;
	}
	if (str[i - 1] != c)
		s_nbr = s_nbr + 1;
	return (s_nbr);
}

static void	ft_next_str(char **next_str, int *next_str_l, char c)
{
	int	i;

	*next_str = *next_str + *next_str_l;
	*next_str_l = 0;
	i = 0;
	while (**next_str && **next_str == c)
	{
		(*next_str)++;
	}
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_l)++;
		i++;
	}
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	char	*next_str;
	int		next_str_l;
	int		i;

	if (!str)
		return (NULL);
	tab = (char **)malloc((ft_get_str_nbr(str, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	next_str = (char *)str;
	next_str_l = 0;
	while (i < ft_get_str_nbr(str, c))
	{
		ft_next_str(&next_str, &next_str_l, c);
		tab[i] = (char *)malloc((next_str_l + 1) * sizeof(char));
		if (!tab[i])
			return (ft_free(tab));
		ft_strlcpy(tab[i], next_str, next_str_l + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
