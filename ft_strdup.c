/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:40:48 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/21 17:44:50 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t		len;
	size_t		i;
	char		*str;

	len = ft_strlen(string);
	str = (char *)malloc((len + 1) * sizeof(*string));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *str = "hello";
	char *s = ft_strdup(str) ;
	printf("%s\n", s);
}
*/
