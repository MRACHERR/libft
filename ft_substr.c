/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:56:24 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/21 20:11:23 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*sub;
	size_t	l;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int main()
{
	char *s = "geeks";
	printf("%s\n", ft_substr(s, 3, 3));
	printf("%s\n", substr(s, 3, 3));

}
*/
