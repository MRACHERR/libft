/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:21:26 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/23 20:43:44 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:21:12 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/22 20:21:12 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:38:14 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/22 20:17:58 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_begining(const char *str ,const char *s)
{
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(str);
	while (i < l)
	{
		if (ft_strchr(s, str[i]) == 0)
		{
			break;
		}
		i++;
	}
	return (i);
} 
int ft_ending(const char *str, const char *s)
{
	size_t	l;	
	size_t	i;

	i = 0;
	l = ft_strlen(str);
	while (i < l)
	{
		if (ft_strchr(s, str[l - i - 1]) == 0)
		{
			break;
		}
		i++;
		
	}
	return (l - i);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int	finish;	
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_begining(s1, set);
	finish = ft_ending(s1, set);
	if (finish <= start)
		return (ft_strdup(""));
	ptr = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + start, finish - start + 1);
	return (ptr);
}
/*
int main()
{
//	char *s = "lorem \n ipsum \t dolor \n sit \t amet";
	char *s = "lorem ipsum dolor sit amet";
	char *p = "  f  ";
	printf("%s\n", s);
	printf("%s\n", ft_strtrim(s," "));
	printf("%d\n", ft_ending(s, " "));
printf("%d\n", ft_begining(s, " "));
}
*/
