/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:09:25 by acherraq          #+#    #+#             */
/*   Updated: 2023/11/20 23:31:33 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
int main()
{
	int str[100];
	int i;
	i = 0;
	//printf("%s\n", str);
	printf("%s\n", ft_memset(str, 0, 10*sizeof(str[0])));
	while (i < 14)
	{
	printf("%d\n", str[i]);
	i++;
	}
}
*/
