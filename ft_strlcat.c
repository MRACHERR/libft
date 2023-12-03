/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:46:49 by acherraq          #+#    #+#             */
/*   Updated: 2023/12/03 12:53:19 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dest_len + 1)
		return (dstsize + src_len);
	if (dstsize > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len + 1 + i < dstsize)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main()
{
	char a[10] = "hello!";
	char b[10] = "world";
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%zu\n",ft_strlcat(a,b,30));
	//ft_strlcat(a,b,20);	
	printf("%s\n",a);
	//printf("%zu\n",ft_strlcat(a,b,20));
	return 0;
}
*/
