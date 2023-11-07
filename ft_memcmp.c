/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:18:45 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/07 13:43:25 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t num)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;
	int				d;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < num)
	{
		d = p1[i] - p2[i];
		if (d != 0)
		{
			break ;
		}
		i++;
	}
	return (d);
}
/*
int	main()
{
	char	*s = "hello world!";
	char	*p = "hello1 world!1";
	printf("%s\n", s);
	printf("%s\n", p);
	printf("%d\n",ft_memcmp(s,p,5));
}
*/
