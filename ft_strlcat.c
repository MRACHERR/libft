/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:46:49 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/04 17:59:41 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


size_t ft_strlcat(char *dst,  const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	len = dst_len;
	if (size == 0 || size < dst_len + 1)
	{
		return (src_len + size);
	}
	i = 0;

		while (src[i] != '\0' && (dst_len + 1 + i) < size)
		{
			dst[len] = src[i]; 
			i++;
			len++;
		}
	dst[len] = '\0';
	return len;
	//return (src_len + dst_len);
}



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
