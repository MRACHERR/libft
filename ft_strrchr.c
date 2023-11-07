/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:01:24 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/06 20:09:40 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c )
{
	int		i;
	size_t	l;
	char	*str;
	char	find;

	l = ft_strlen(s);
	find = (char)c;
	str = (char *)s;
	while (l > 0)
	{
		if (str[l] == find)
			return (str + l);
		l--;
	}
	if (str[l] == find)
		return (str + l);
	else
		return (NULL);
}
/*

int	main()
{
	char	* s = "hello world!";
	printf("%s\n", s);
	printf("%s\n",ft_strrchr(s,'l'));

}
*/
