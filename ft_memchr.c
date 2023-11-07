/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:03:38 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/07 13:17:39 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)ptr + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s = "hello world!";
	printf("%s\n", s);
	printf("%s\n",ft_memchr(s,'e',5));

}
*/
