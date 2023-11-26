/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:57 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/23 19:56:41 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*n_dst;
	unsigned char	*n_src;

	i = 0;
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		while (n--)
			*n_dst++ = *n_src++;
	}
	else
	{
		while (i < n)
		{
			n_dst[n - i - 1] = n_src[n - i - 1];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
   char src[50] = "this is a good nyancat !\r\n";
char src1[50] = "this is a good nyancat !\r\n";
   char dest1[50];
   char dest[50];
   //strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   memmove(dest1, src1, strlen(src1)+1);
   printf("After memcpy dest = %s\n", dest1);	
   return(0);
}
*/
