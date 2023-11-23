/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:57 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/23 14:11:53 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*n_dst;
	unsigned char	*n_src;

	i = 0;
	if (dst == src || n == 0)
	{
		return (dst);
	}
	if (dst < src)
	{
		n_dst = (unsigned char*) dst;	
		n_src = (unsigned char*) src;
		while (i < n)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	if (src > dst)
	{
		n_dst = (unsigned char*) dst;	
		n_src = (unsigned char*) src;
		while (i < n)
		{
			n_dst[n - i] = n_src[n - i -1];
			i++;
		}

	}

	return (dst);
}
/*
int main()
{
   char src[50] = "hello";
   char dest[50];
   //strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
*/
