/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:20:44 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/20 23:06:02 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*items;

	items = malloc(nitems * size);
	if (items == 0)
		return (NULL);
	ft_bzero(items, (nitems * size));
	return (items);
}
/*
int	main(void)
{
	int	*s;
	int	i;

	s = (int *)ft_calloc(3,sizeof(int));
	i = 0;
	while (i< 3)
	{
		scanf("%d", &s[i]);
		i++;
	}
	printf("\n the number entered : \n");
	i = 0;
	while (i < 3)
	{
		printf("%d\n", s[i]);
		i++;
	}
	printf("%d", s[0]);
	free(s);
}
*/
