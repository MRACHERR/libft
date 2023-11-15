/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:57 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/15 20:19:15 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * n);
	if ((str1 == NULL && str2 == NULL) || tmp == NULL)
	{
		return (NULL);
	}
	ft_bzero(tmp, n);
	ft_memcpy(tmp, str2, n);
	ft_memcpy(str1, tmp, n);
	free(tmp);
	return (str1);
}
/*
int main()
{
   char src[50] = "https://www.tutorialspoint.com";
   char dest[50];
   //strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   //ft_memmove(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
*/
