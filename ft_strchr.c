/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:24:07 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/15 20:20:36 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	else 
		return (NULL);
}
/*
int main()
{
	char s[23] = "hello world!";
	printf("%s\n",s);
printf("%s\n",ft_strchr(s, 'e'));	

}
*/
