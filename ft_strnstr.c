/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:02:33 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/07 16:30:55 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && i + j < len)
		{
			j++;
			if (n[j] == '\0')
			{
				return ((char *)h + i);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[30] = "pen pineapple apple pen!";

	char* ptr = ft_strnstr(s1, "pine", 10);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "pine", 5);
	printf("%s\n", ptr1);

	return (0);
}
*/
